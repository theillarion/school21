#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_valid_base(char	*base, int size_base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (size_base < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
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

void	ft_output_result_base(char	*base, int	*array_int)
{
	int	length_str;
	int	i;

	i = 0;
	while (array_int[i] != -1)
		i++;
	length_str = i;
	i = length_str - 1;
	while (i >= 0)
	{
		write(1, &base[array_int[i]], 1);
		i--;
	}
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	unsigned int	size_base;
	unsigned int	i;
	unsigned int	number;
	int				result[65];

	i = 0;
	number = ft_to_unsigned_number(nbr);
	size_base = ft_strlen(base);
	if (ft_check_valid_base(base, size_base) == 0)
		return ;
	while (number >= size_base)
	{
		result[i] = number % size_base;
		number /= size_base;
		i++;
	}
	result[i] = number;
	result[i + 1] = -1;
	ft_output_result_base(base, result);
}
