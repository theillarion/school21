int	ft_to_int(char	*str, int i)
{
	int	number;

	number = str[i] - 48;
	i++;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		number *= 10;
		number += (str[i] - 48);
		i++;
	}
	return (number);
}

unsigned int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	number;
	int				is_negative;
	unsigned int	quantity_minus;

	is_negative = 0;
	i = 0;
	quantity_minus = 0;
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			quantity_minus++;
		i++;
	}
	if (quantity_minus % 2 != 0)
		is_negative = 1;
	number = ft_to_int(str, i);
	if (is_negative == 1)
		number *= -1;
	return (number);
}

int	ft_get_result_in_base(char	*base, int	*array_int, int	is_negative)
{
	int	length_str;
	int	i;
	int	number;

	i = 0;
	while (array_int[i] != -1)
		i++;
	length_str = i;
	i = length_str - 1;
	number = base[array_int[i]] - 48;
	i--;
	while (i >= 0)
	{
		number *= 10;
		number += base[array_int[i]] - 48;
		i--;
	}
	if (is_negative == 1)
		number *= -1;
	return (number);
}

int	ft_convert_to_int(int	*result, char	*base, int	number, int	size_base)
{
	int	i;

	i = 0;
	while (number >= size_base)
	{
		result[i] = number % size_base;
		number /= size_base;
		i++;
	}
	result[i] = number;
	result[i + 1] = -1;
	number = base[result[i]] - 48;
	i--;
	while (i >= 0)
	{
		number *= 10;
		number += base[result[i]] - 48;
		i--;
	}
	return (number);
}

int	ft_atoi_base(char	*str, char	*base)
{
	unsigned int	size_base;
	unsigned int	i;
	int				number;
	int				result[65];
	int				is_negative;

	number = ft_atoi(str);
	if (number < 0)
	{
		is_negative = 1;
		number *= -1;
	}
	i = 0;
	while (base[i] != '\0')
		i++;
	size_base = i;
	number = ft_convert_to_int(result, base, number, size_base);
	if (is_negative == 1)
		number *= -1;
	return (number);
}
