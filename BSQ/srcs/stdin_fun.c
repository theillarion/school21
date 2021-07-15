#include "bsq.h"

char	*ft_read_con(void)
{
	int		read_count;
	char	*buf;
	char	*str;
	char	*tmp;

	buf = malloc(sizeof(char) * 4097);
	str = malloc(0);
	read_count = 1;
	while (read_count)
	{
		read_count = read(0, buf, 4096);
		if (read_count > 0)
		{
			buf[read_count] = '\0';
			tmp = str;
			str = ft_strjoin(str, buf);
			free(tmp);
		}
	}
	free(buf);
	return (str);
}

int	fill_symbols(char *str_stdin, t_map *tmap, int *i)
{
	int		symb_count;

	symb_count = 0;
	while (str_stdin[*i] && str_stdin[*i] != '\n')
	{
		if (ft_char_is_printable(str_stdin[*i]))
		{
			if (symb_count == 0)
				tmap->space = str_stdin[*i];
			if (symb_count == 1)
				tmap->stone = str_stdin[*i];
			if (symb_count == 2)
				tmap->result = str_stdin[*i];
		}
		else
			return (-2);
		symb_count++;
		*i = *i + 1;
	}
	if (symb_count != 3)
		return (-2);
	return (0);
}

int	nr_of_cols(char *str_stdin, int i)
{
	int		str_cols;

	str_cols = 0;
	while (str_stdin[i] && str_stdin[i] != '\n')
	{
		str_cols++;
		i = i + 1;
	}
	return (str_cols);
}

int	fill_map(t_map *tmap, int i, int number_of_rows, char *str_stdin)
{
	tmap->rows = number_of_rows;
	tmap->cols = nr_of_cols(str_stdin, i);
	tmap->map = ft_array_to_double_array(&str_stdin[i], tmap->rows);
	i = 0;
	while (i < number_of_rows)
	{
		if (ft_strlen(tmap->map[i]) != tmap->cols)
			return (-2);
		i++;
	}
	return (0);
}

int	stdin_map(t_map *tmap)
{
	char	*str_stdin;
	int		i;
	int		number_of_rows;
	char	*sym_str;

	str_stdin = ft_read_con();
	i = 0;
	number_of_rows = ft_atoi(str_stdin, &i);
	if (number_of_rows <= 0)
		return (return_free(str_stdin));
	if (fill_symbols(str_stdin, tmap, &i) == -2)
		return (return_free(str_stdin));
	if (tmap->space == tmap->stone || tmap->space == tmap->result
		|| tmap->stone == tmap->result)
		return (return_free(str_stdin));
	sym_str = get_syms_str(tmap);
	if (check_errors(str_stdin, ++i, sym_str, number_of_rows) == -2)
		return (return_free_2(str_stdin, sym_str));
	if (fill_map(tmap, i, number_of_rows, str_stdin) == -2)
		return (return_free_2(str_stdin, sym_str));
	free(sym_str);
	free(str_stdin);
	return (0);
}
