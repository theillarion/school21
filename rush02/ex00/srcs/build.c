#include "header.h"

int	find_index(char	*str,	char	del, int	i)
{
	while (str[i] != '\0')
	{
		if (str[i] == del)
			return (i);
		i++;
	}
	if (del == '\0')
		return (i);
	return (-1);
}

int	check_is_printable(char	*str, int	start, int	end)
{
	while (start <= end)
	{
		if (str[start] < ' ' || str[start] > '~')
			return (-1);
		start++;
	}
	return (1);
}

char	*parser_string(char	*str)
{
	char	*new_str;
	int		start_pos;
	//int		end_pos;
	//int		i;

	//end_pos = ft_strlen(str);
	start_pos = 0;
	while (str[start_pos] && str[start_pos] == ' ')
		start_pos++;
	/*if (start_pos == end_pos)
		return (NULL);
	while (end_pos >= 0 && str[end_pos] == ' ')
		end_pos--;
	if (start_pos > end_pos)
		return (NULL);*/
	/*if (check_is_printable(str, start_pos, end_pos) == -1)
		return (NULL);
	new_str = malloc(sizeof(char) * (end_pos - start_pos + 2));
	i = 0;
	while (start_pos <= end_pos)
	{
		new_str[i] = str[start_pos];
		i++;
		start_pos++;
	}
	new_str[i] = '\0';*/

	int j = 0;
	while (str[start_pos] >= ' ' && str[start_pos] <= '~')
	{
		j++;
		start_pos++;
	}
	if (str[start_pos] != '\0')
		return (NULL);
	new_str = malloc(sizeof(char) * (j + 1));
	if (new_str == NULL)
		return (NULL);
	start_pos -= j;
	j = 0;
	while (str[start_pos] >= ' ' && str[start_pos] <= '~')
	{
		new_str[j] = str[start_pos];
		start_pos++;
		j++;
	}
	new_str[start_pos] = '\0';
	return (new_str);
}

int	length_int(int	*arr)
{
	int length;

	length = 0;
	while (arr[length] != -1)
		length++;
	return (length);
}

int	build_struct(char	**str, int	count_string, t_map *map)
{
	int 	i;
	int		j;
	char	*str_number;
	int		*key;
	char	*value;
	int		backup;

	j = 0;
	while (j < count_string)
	{
		i = 0;
		i = find_index(str[j], ':', i);
		str_number = malloc(sizeof(char) * (i + 1));
		if (str_number == NULL)
			return (-1);
		ft_memset(str_number, '\0', i + 1);
		ft_strncat(str_number, str[j], 0, i);
		key = ft_atoi(str_number);
		free(str_number);
		backup = i;
		i = find_index(str[j], '\0', i + 1);
		if (i == -1)
			return (-4);
		value = malloc(sizeof(char) * (i - backup + 1));
		if (value == NULL)
			return (-2);
		ft_memset(str_number, '\0', i - backup + 1);
		ft_strncat(value, str[j], backup + 1, i - backup);
		value = parser_string(value);
		if (value == NULL)
			return (-3);
		ft_map_push(map, key, value, length_int(key));
		j++;
	}
	return (1);
}
