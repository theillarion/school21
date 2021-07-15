#include "bsq.h"

int	ft_find(char	*str,	char	del)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == del)
			count++;
		i++;
	}
	return (count);
}

int	ft_find_index(char	*str,	char	del, int	i)
{
	while (str[i] != '\0')
	{
		if (str[i] == del)
			return (i);
		i++;
	}
	if (del == '\0')
		return (i);
	return (-1);
}
