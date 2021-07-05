int	ft_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strlcpy(char	*dest, char	*src, unsigned int	size)
{
	int	i;

	i = 0;
	while (i != size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_size(src));
}
