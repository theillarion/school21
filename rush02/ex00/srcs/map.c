#include "header.h"

void	ft_map_push(t_map	*map, int	*key, char	*value, int	size)
{
	int	i;

	i = 0;
	while (map[i].size != -1)
		i++;
	map[i].number = key;
	map[i].string = value;
	map[i].string[ft_strlen(value)] = '\0';
	map[i].size = size;
}

void	init_map(t_map *map, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		map[i].size = -1;
		i++;
	}
}

char	*get_value(t_map	*map, int	*key)
{
	int	i;

	i = 0;
	while (map[i].size != 0)
	{
		if (map[i].number == key)
			return (map[i].string);
		i++;
	}
	return (NULL);
}
