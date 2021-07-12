#include "header.h"

char	**array_to_double_array(char	*str, int count_strings)
{
	char	**new_str;
	int		i;
	int		j;
	int		k;
	int		backup;

	i = 0;
	k = 0;
	new_str = malloc(sizeof(char *) * count_strings);
	if (new_str == NULL)
		return (NULL);
	while (k < count_strings && str[i])
	{
		backup = i;
		j = 0;
		while (str[i] != '\n' && str[i])
		{
			j++;
			i++;
		}
		new_str[k] = malloc(sizeof(char) * (j + 1));
		if (new_str == NULL)
			return (NULL);
		new_str[k][0] = '\0';
		ft_memset(new_str[k], '\0', j);
		ft_strncat(new_str[k], str, backup, j);
		k++;
		if (str[i])
			i++;
	}
	return (new_str);
}

char	*delete_spaces(char	*str)
{
	int		i;
	int		j;
	char	*new_str;

	new_str = malloc(sizeof(char) * ft_strlen(str));
	i = 0;
	while (str[i] == ' ')
		i++;
	j = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		new_str[j] = str[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
