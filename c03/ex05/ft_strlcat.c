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

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	real_size_dest;

	real_size_dest = ft_size(dest);
	i = 0;
	while (i != size && src[i])
	{
		dest[real_size_dest + i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (ft_size(src));
}
