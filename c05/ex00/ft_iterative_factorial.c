int	ft_iterative_factorial(int	nb)
{
	unsigned int	i;
	int				result;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= (unsigned int)nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
