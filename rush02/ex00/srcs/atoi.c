#include "header.h"

int	*ft_atoi(char	*str)
{
	unsigned int	i;
	unsigned int	j;
	int				*number;

	i = 0;
	j = 0;
	number = malloc(sizeof(int) * (ft_strlen(str) + 1));
	while (str[i] == 32 || str[i] == 9)
		i++;
	if (str[i] == '-')
		return (NULL);
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number[j] = str[i] - 48;
		i++;
		j++;
	}
	while (str[i] == 32 || str[i] == 9)
		i++;
	if (str[i] != '\0')
		return (NULL);
	number[j] = -1;
	return (number);
}
