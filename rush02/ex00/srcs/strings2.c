#include "header.h"

char	*str_to_int(int *number)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * (length_int(number) + 1));
	i = 0;
	while (number[i] != -1)
	{
		str[i] = number[i] + 48;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	get_len(int nbr)
{
	int len = 0;
	if (nbr <= 0)
		++len;
	while (nbr != 0)
	{
		++len;
		nbr = nbr / 10;
	}
	return (len);
}

int	ft_shift_wspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' '
		|| str[i] == '\t'
		|| str[i] == '\n'
		|| str[i] == '\v'
		|| str[i] == '\f'
		|| str[i] == '\r')
	{
		i++;
	}
	if (i == 0)
		return (0);
	return (i);
}

int	ft_operator(char *str)
{
	int	i;
	int	operator;

	i = 0;
	operator = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			operator *= -1;
		}
		i++;
	}
	return (operator);
}

int	ft_shift_plus_minus(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	return (i);
}
