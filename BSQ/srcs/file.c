#include "bsq.h"

char	*ft_get_symbols_file(char	*filename)
{
	int		i;
	int		ds_file;
	char	buff;
	char	*symbols;

	ds_file = open(filename, READ);
	if (ds_file == -1 || read(ds_file, &buff, 1) == -1)
		return (NULL);
	while (buff >= '0' && buff <= '9')
		if (read(ds_file, &buff, 1) == -1)
			return (NULL);
	symbols = malloc(sizeof(char) * 4);
	i = 0;
	while (buff != '\n')
	{
		symbols[i] = buff;
		if (read(ds_file, &buff, 1) == -1)
			return (NULL);
		i++;
	}
	symbols[i] = '\0';
	if (close(ds_file) == -1)
		return (NULL);
	return (symbols);
}

int	ft_get_rows_file(char	*name_file)
{
	char	buff[1024];
	int		ds_file;
	int		size;
	int		count_rows;

	count_rows = 0;
	ds_file = open(name_file, READ);
	if (ds_file == -1)
		return (-1);
	size = read(ds_file, buff, 1023);
	if (size == -1)
		return (-1);
	while (size != 0)
	{
		buff[size] = '\0';
		count_rows += ft_find(buff, '\n');
		size = read(ds_file, buff, 1023);
		if (size == -1)
			return (-1);
	}
	if (close(ds_file) == -1)
		return (-1);
	return (count_rows);
}

int	ft_get_cols_file(char	*name_file)
{
	char	buff;
	int		ds_file;
	int		current_size;
	int		count_cols;

	count_cols = 0;
	ds_file = open(name_file, READ);
	if (ds_file == -1)
		return (-1);
	if (read(ds_file, &buff, 1) == -1)
		return (-1);
	while (buff != '\n')
		read(ds_file, &buff, 1);
	current_size = read(ds_file, &buff, 1);
	if (current_size == -1)
		return (-1);
	while (buff != '\n')
	{
		count_cols++;
		current_size = read(ds_file, &buff, 1);
	}
	if (close(ds_file) == -1)
		return (-1);
	return (count_cols);
}

int	ft_get_size_file(char	*name_file)
{
	char	buff[1024];
	int		file;
	int		current_size;
	int		common_size;

	current_size = 1;
	file = open(name_file, READ);
	if (file == -1)
		return (-1);
	if (read(file, &buff, 1) == -1)
		return (-1);
	while (buff[0] != '\n')
		read(file, &buff, 1);
	common_size = 0;
	while (current_size != 0)
	{
		current_size = read(file, buff, 1023);
		common_size += current_size;
		if (current_size == -1)
			return (-1);
	}
	if (close(file) == -1)
		return (-1);
	return (common_size);
}

int	ft_get_rows(char	*filename)
{
	char	*buff;
	int		dskp_file;
	int		is_find;
	int		rows;
	int		i;

	i = 0;
	buff = malloc(sizeof(char) * 20);
	dskp_file = open(filename, READ);
	if (dskp_file == -1)
		return (-1);
	read(dskp_file, buff, 19);
	if (dskp_file == -1 || close(dskp_file) == -1)
		return (-1);
	is_find = ft_find_index(buff, '\n', 0);
	if (is_find == -1)
		return (-2);
	buff[is_find] = '\0';
	rows = ft_atoi(buff, &i);
	free(buff);
	if (rows <= 0)
		return (-2);
	return (rows);
}
