#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	start_pos;

	start_pos = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[start_pos + i] = src[i];
		i++;
	}
	dest[start_pos + i] = '\0';
	return (dest);
}

char	*ft_strdup(char	*src)
{
	char			*dst;
	unsigned int	size_src;
	unsigned int	i;

	size_src = ft_strlen(src);
	dst = malloc(size_src + 1);
	if (dst == NULL)
		return (dst);
	i = 0;
	while (i < size_src)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	t_stock_str	*struct_str;
	int			i;

	struct_str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (struct_str == NULL)
		return (struct_str);
	i = 0;
	while (i < ac)
	{
		struct_str[i].size = ft_strlen(av[i]);
		struct_str[i].str = av[i];
		struct_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	struct_str[i].str = 0;
	return (struct_str);
}
