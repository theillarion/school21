#include "header.h"

int	get_count_strings(char	*name_file)
{
	char	buff[1024];
	int		file;
	int		size;
	int		count_strings;

	count_strings = 0;
	file = open(name_file, O_RDONLY);
	if (file == -1)
		return (-1);
	size = read(file, buff, 1023);
	if (size == -1)
		return (-1);
	while (size != 0)
	{
		buff[size] = '\0';
		count_strings += find(buff, '\n');
		size = read(file, buff, 1023);
		if (size == -1)
			return (-1);
	}
	if (close(file) == -1)
		return (-1);
	return (count_strings);
}

int	get_size_file(char	*name_file)
{
	char	buff[1024];
	int		file;
	int		count_size;
	int		common_size;

	file = open(name_file, O_RDONLY);
	if (file == -1)
		return (-1);
	count_size = read(file, buff, 1023);
	if (count_size == -1)
		return (-1);
	common_size = count_size;
	while (count_size != 0)
	{
		count_size = read(file, buff, 1023);
		common_size += count_size;
		if (count_size == -1)
			return (-1);
	}
	if (close(file) == -1)
		return (-1);
	return (common_size);
}
