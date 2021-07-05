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

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > ft_size(src))
	{
		while (i != ft_size(src))
		{
			dest[i] = '\0';
		}
	}
	else if (n <= ft_size(src))
		dest[i] = '\0';
	return (dest);
}
