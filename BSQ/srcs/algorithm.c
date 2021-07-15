#include "bsq.h"

void	ft_fill_cols(t_map *map, int	**array, int	*max, int *backup)
{
	int	i;

	i = 0;
	while (i < map->cols)
	{
		if (map->map[0][i] == map->space)
			array[0][i] = 1;
		else if (map->map[0][i] == map->stone)
			array[0][i] = 0;
		if (array[0][i] > *max)
		{
			*max = array[0][i];
			backup[0] = 0;
			backup[1] = i;
		}
		i++;
	}
}

void	ft_fill_rows(t_map *map, int	**array, int	*max, int *backup)
{
	int	i;

	i = 0;
	while (i < map->rows)
	{
		if (map->map[i][0] == map->space)
			array[i][0] = 1;
		else if (map->map[0][i] == map->stone)
			array[i][0] = 0;
		if (array[i][0] > *max)
		{
			*max = array[i][0];
			backup[0] = i;
			backup[1] = 0;
		}
		i++;
	}
}

void	ft_fill_all_map(int	**array, t_map	*map, int	*max, int	*backup)
{
	int	i;
	int	j;

	i = 0;
	while (++i < map->rows)
	{
		j = 0;
		while (++j < map->cols)
		{
			if (map->map[i][j] == map->stone)
				array[i][j] = 0;
			else
			{
				array[i][j] = ft_min(array[i][j - 1],
						array[i - 1][j - 1], array[i - 1][j]) + 1;
				if (array[i][j] > *max)
				{
					*max = array[i][j];
					backup[0] = i;
					backup[1] = j;
				}
			}
		}
	}
}

void	ft_fill_result(t_map	*map, int	max, int	*backup)
{
	int	i;
	int	j;

	i = backup[0] - (max - 1);
	while (i <= backup[0])
	{
		j = backup[1] - (max - 1);
		while (j <= backup[1])
		{
			map->map[i][j] = map->result;
			j++;
		}
		i++;
	}
}

void	ft_algorithm(t_map *map)
{
	int	**new_arr;
	int	max;
	int	backup[2];

	max = 0;
	new_arr = ft_memory_allocation(map->rows, map->cols);
	ft_fill_rows(map, new_arr, &max, backup);
	ft_fill_cols(map, new_arr, &max, backup);
	ft_fill_all_map(new_arr, map, &max, backup);
	ft_fill_result(map, max, backup);
	ft_memory_clean(new_arr, map->rows);
	ft_output_map(map);
}
