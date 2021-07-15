#include "bsq.h"

int	ft_min(int	arg1, int	arg2, int	arg3)
{
	int	min;

	min = arg1;
	if (arg2 < min)
		min = arg2;
	if (arg3 < min)
		min = arg3;
	return (min);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

void	ft_add_number_to_nb(int *nb, char c, int *j)
{
	if (c >= '0' && c <= '9')
	{
		*nb = *nb * 10 + c - '0';
		*j = *j + 1;
	}
}

int	ft_atoi(char *str, int *i)
{
	int		j;
	int		res_nb;

	j = 0;
	res_nb = 0;
	while (str[*i] != '\0' && is_digit(str[*i]))
	{
		ft_add_number_to_nb(&res_nb, str[*i], &j);
		*i += 1;
	}
	return (res_nb);
}
