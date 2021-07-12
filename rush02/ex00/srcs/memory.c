#include "header.h"

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
