unsigned int	ft_size(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char	*str, char	*to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] && str[i] == to_find[j])
		{
			j++;
			i++;
		}
		if (j == ft_size(to_find))
			return (&str[i - j]);
		i = i + 1 - j;
	}
	return (0);
}
