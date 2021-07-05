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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	start_pos;

	start_pos = ft_size(dest);
	i = 0;
	while (src[i] && i != nb)
	{
		dest[start_pos + i] = src[i];
		i++;
	}
	dest[start_pos + i] = '\0';
	return (dest);
}
