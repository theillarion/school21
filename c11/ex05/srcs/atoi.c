#include "ft.h"

int	ft_atoi(char	*str)
{
	int	i;
	int	number;
	int	sign;

	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
		number = str[i] - 48;
	else
		number = 0;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number * sign);
}
