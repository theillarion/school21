#include "bsq.h"

int	ft_check_1_line(char	*filename)
{
	char	*buff;
	int		dskp_file;
	int		is_find;
	int		i;

	buff = malloc(sizeof(char) * 20);
	dskp_file = open(filename, READ);
	if (dskp_file == -1)
		return (return_free(buff));
	if (read(dskp_file, buff, 19) == -1)
		return (return_free(buff));
	is_find = ft_find_index(buff, '\n', 0);
	if (is_find == -1)
		return (return_free(buff));
	buff[is_find] = '\0';
	i = 0;
	if (ft_atoi(buff, &i) == 0 || is_find - i != 3
		|| ft_is_equal_elements(buff, i) == 1 || ft_str_is_printable(buff) == 0)
		return (return_free(buff));
	free(buff);
	if (close(dskp_file) == -1)
		return (-1);
	return (1);
}

int	skip_1_line(char	*filename)
{
	char	buff[2];
	int		dskp_file;

	dskp_file = open(filename, READ);
	if (dskp_file == -1)
		return (-1);
	if (read(dskp_file, &buff[0], 1) == -1)
		return (-1);
	buff[0] = '1';
	while (buff[0] != '\0' && buff[0] != '\n')
		if (read(dskp_file, &buff[0], 1) == -1)
			return (-1);
	if (buff[0] == '\0')
		return (-1);
	return (dskp_file);
}

int	ft_check_map(char	*filename, char	*symbols)
{
	char	*buff;
	int		dskp_file;
	int		current_size;
	int		count_rows;

	buff = malloc(sizeof(char) * 1024);
	count_rows = 0;
	dskp_file = skip_1_line(filename);
	if (dskp_file == -1)
		return (return_free_2(buff, symbols));
	current_size = read(dskp_file, buff, 1023);
	while (current_size != 0)
	{
		buff[current_size] = '\0';
		if (current_size == -1
			|| is_include_only_symbols(buff, symbols, '\n') == 0)
			return (return_free_2(buff, symbols));
		count_rows += ft_find(buff, '\n');
		current_size = read(dskp_file, buff, 1023);
	}
	free(buff);
	free(symbols);
	if (close(dskp_file) == -1 || ft_get_rows(filename) != count_rows)
		return (-1);
	return (1);
}

int	ft_check_comlete_map(t_map	*map)
{
	int	i;

	i = 0;
	while (i < map->rows)
	{
		if (ft_strlen(map->map[i]) == 0 || ft_strlen(map->map[i]) != map->cols)
			return (-2);
		i++;
	}
	return (1);
}
