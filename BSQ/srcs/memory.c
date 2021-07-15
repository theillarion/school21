#include "bsq.h"

char	*ft_memset(char	*str, char	del, int	size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str[i] = del;
		i++;
	}
	return (str);
}

int	**ft_memory_allocation(int	rows, int	cols)
{
	int	**array;
	int	i;

	array = malloc(sizeof(int *) * rows);
	i = 0;
	while (i < rows)
	{
		array[i] = malloc(sizeof(int) * cols);
		i++;
	}
	return (array);
}

void	ft_memory_clean(int	**array, int	rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	ft_memory_clean_map(t_map	*map)
{
	int	i;

	i = 0;
	while (i < map->rows)
	{
		free(map->map[i]);
		i++;
	}
	free(map->map);
	free(map);
}
