#include "bsq.h"

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

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	return (strlen);
}

int	ft_is_equal_elements(char	*str, int i)
{
	int	length;
	int	j;

	length = ft_strlen(str);
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_include_only_symbols(char	*str,	char	*symbols, char	symbol)
{
	int	i;
	int	j;
	int	k;
	int	length_dest;
	int	length_src;

	i = 0;
	length_dest = ft_strlen(str);
	length_src = ft_strlen(symbols);
	while (i < length_dest)
	{
		j = 0;
		k = 0;
		while (j < length_src - 1)
		{
			if (str[i] == symbols[j] || str[i] == symbol)
				k++;
			j++;
		}
		if (k == 0)
			return (0);
		i++;
	}
	return (1);
}
