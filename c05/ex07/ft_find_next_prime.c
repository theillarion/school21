const int	g_INT_MAX = 2147483647;

int	ft_sqrt_index(int nb)
{
	unsigned int	i;

	if (nb == 0)
		return (0);
	i = 1;
	while ((unsigned int)nb > i * i)
		i++;
	return (i);
}

int	ft_is_prime(int	nb)
{
	unsigned int	i;
	unsigned int	end_pos;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	end_pos = ft_sqrt_index(nb);
	i = 2;
	while (i <= end_pos)
	{
		if ((unsigned int)nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int	nb)
{
	unsigned int	i;

	if (nb < 2)
		return (2);
	i = nb;
	while (i <= g_INT_MAX)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	return (0);
}
