unsigned int	ft_skip_space(char	*str, unsigned int	i)
{
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	return (i);
}

unsigned int	ft_skip_sign(char	*str, unsigned int	i)
{
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
		i++;
	return (i);
}

unsigned int	ft_get_sign(char	*str, unsigned int	i)
{
	unsigned int	quantity_minus;

	quantity_minus = 0;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			quantity_minus++;
		i++;
	}
	return (quantity_minus);
}

int	to_str(char	*str, int i)
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

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				number;
	int				is_negative;

	is_negative = 0;
	i = ft_skip_space(str, 0);
	if (ft_get_sign(str, i) % 2 != 0)
		is_negative = 1;
	i = ft_skip_sign(str, i);
	number = to_str(str, i);
	if (is_negative == 1)
		number *= -1;
	return (number);
}
