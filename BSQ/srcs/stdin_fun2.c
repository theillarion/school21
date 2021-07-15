#include "bsq.h"

int	nr_of_rows(char *str_stdin, int i)
{
	int	count_rows;

	count_rows = 0;
	while (str_stdin[i])
	{
		count_rows += ft_find(str_stdin, '\n');
		i++;
	}
	return (count_rows);
}

int	is_empty_str_err(int i, char *str_stdin)
{
	int	is_empty;
	int	is_1st_str_empty;

	is_empty = 0;
	is_1st_str_empty = i;
	while (str_stdin[i])
	{
		if (str_stdin[i] == '\n')
		{
			if (i - is_empty == 1)
				return (-2);
			is_empty = i;
		}
		i = i + 1;
	}
	if (i - is_1st_str_empty == 1)
		return (-2);
	if (str_stdin[i - 1] != '\n')
		return (-2);
	return (0);
}

char	*get_syms_str(t_map *tmap)
{
	char	*str;

	str = malloc(4);
	str[0] = tmap->space;
	str[1] = tmap->stone;
	str[2] = tmap->result;
	str[3] = '\0';
	return (str);
}

int	check_errors(char *str_stdin, int i, char *sym_str, int number_of_rows)
{
	if (!(is_include_only_symbols(&str_stdin[i], sym_str, '\n'))
		|| (ft_find(&str_stdin[i], '\n') == 0)
		|| (ft_find(&str_stdin[i], '\n') != number_of_rows)
		|| (is_empty_str_err(i, str_stdin) == -2))
		return (-2);
	return (0);
}
