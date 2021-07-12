#include "header.h"

int	ft_intcmp(int *s1, int *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != -1 || s2[i] != -1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	find(char	*str,	char	del)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == del)
			count++;
		i++;
	}
	return (count);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char	*str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_strncat(char *dest, char *src, unsigned int	pos, unsigned int nb)
{
	unsigned int	i;
	unsigned int	start_pos;

	start_pos = ft_strlen(dest);
	i = 0;
	while (src[i] && i != nb)
	{
		dest[start_pos + i] = src[pos + i];
		i++;
	}
	dest[start_pos + i] = '\0';
	return (dest);
}
