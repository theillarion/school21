int	ft_sqrt(int nb)
{
	unsigned int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while ((unsigned int)nb > i * i)
		i++;
	if (nb / i == i && nb % i == 0)
		return (i);
	else
		return (0);
}
