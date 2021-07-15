#include "bsq.h"

t_map	*ft_create_map(char	*filename)
{
	t_map	*map;
	char	*array;
	int		size_file;
	char	*symbols;

	map = malloc(sizeof(t_map));
	size_file = ft_get_size_file(filename);
	map->cols = ft_get_cols_file(filename);
	map->rows = ft_get_rows_file(filename) - 1;
	if (map->cols <= 0 || map->rows <= 0
		|| (map->cols + 1) * map->rows != size_file)
		return (NULL);
	array = ft_create_array(filename, size_file);
	map->map = ft_array_to_double_array(array, map->rows);
	free(array);
	symbols = ft_get_symbols_file(filename);
	if (array == NULL || map->map == NULL || symbols == NULL)
		return (NULL);
	map->space = symbols[0];
	map->stone = symbols[1];
	map->result = symbols[2];
	free(symbols);
	return (map);
}

void	ft_output_map(t_map	*map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		ft_stdout_string(map->map[i]);
		ft_stdout_char('\n');
		i++;
	}
}
