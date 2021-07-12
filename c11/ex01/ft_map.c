#include "stdlib.h"

int	*ft_map(int	*tab, int	length, int(*f)(int))
{
	int	*array;
	int	i;

	array = malloc(sizeof(int) * length);
	if (array == NULL)
		return (array);
	i = 0;
	while (i < length)
	{
		array[i] = (*f)(tab[i]);
		i++;
	}
	return (array);
}
