int	ft_is_sort(int	*tab, int	length, int(*f)(int, int))
{
	int	i;
	int	neg;
	int	pos;

	if (length < 3)
		return (1);
	i = 0;
	neg = 0;
	pos = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			pos++;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			neg++;
		i++;
	}
	if (neg > 0 && pos > 0)
		return (0);
	return (1);
}
