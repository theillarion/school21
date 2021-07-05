int	ft_iterative_power(int	nb, int	power)
{
	unsigned int	i;
	int				result;

	result = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i != (unsigned int)power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
