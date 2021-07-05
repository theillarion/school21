#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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
