#include <stdlib.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	i;
	int	j;

	range[0] = NULL;
	if (min >= max)
		return (0);
	range[0] = malloc((max - min) * 4);
	if (range[0] == NULL)
		return (-1);
	i = 0;
	j = min;
	while (i < max - min)
	{
		range[0][i] = j;
		i++;
		j++;
	}
	return (i);
}
