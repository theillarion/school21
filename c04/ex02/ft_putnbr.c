#include <unistd.h>

int	ft_get_size(unsigned int number)
{
	int	i;

	i = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

int	ft_pow_number(unsigned int number, int degree)
{
	int	i;
	int	result;

	i = 1;
	result = number;
	if (degree == 0)
		return (1);
	else if (degree == 1)
		return (number);
	while (degree >= 0 && i != degree)
	{
		result *= number;
		i++;
	}
	return (result);
}

int	ft_get_char(unsigned int	number, unsigned int	index)
{
	unsigned int	i;
	unsigned int	current_count;

	i = 0;
	current_count = ft_get_size(number) - 1;
	while (i != index)
	{
		number %= ft_pow_number(10, current_count);
		current_count--;
		i++;
	}
	return ((number / (ft_pow_number(10, current_count))) + 48);
}

unsigned int	ft_to_unsigned_number(int	nbr)
{
	unsigned int	number;

	if (nbr >= 0)
		number = nbr;
	else
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
			number = 2147483648;
		else
			number = nbr * -1;
	}
	return (number);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;
	unsigned int	size;
	unsigned int	number;
	char			current_char;

	number = ft_to_unsigned_number(nb);
	i = 0;
	size = ft_get_size(number);
	while (i != size)
	{
		current_char = ft_get_char(number, i);
		write(1, &current_char, 1);
		i++;
	}
}
