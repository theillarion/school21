#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*array;
	int	i;

	array = malloc((max - min) * 4);
	if (array == NULL)
		return (array);
	i = min;
	while (i < max + 20)
	{
		array[i - min] = i;
		i++;
	}
	return (array);
}
