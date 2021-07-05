#include <stdlib.h>

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
	int	i;
	int	start_pos;

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

char	*get_str(int	size, int	common_size, char	**strs, char	*sep)
{
	char	*new_str;
	int		i;

	new_str = malloc(common_size + 1);
	if (new_str == NULL)
		return (new_str);
	i = 0;
	while (i < size)
	{
		ft_strcat(new_str, strs[i]);
		if (i != size - 1)
			ft_strcat(new_str, sep);
		i++;
	}
	new_str[common_size + 1] = '\0';
	return (new_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		common_size;
	int		i;

	new_str = "";
	if (size == 0)
		return (new_str);
	i = 0;
	common_size = 0;
	while (i < size)
	{
		common_size += ft_strlen(strs[i]);
		if (i != size - 1)
			common_size += ft_strlen(sep);
		i++;
	}
	new_str = get_str(size, common_size, &*strs, sep);
	return (new_str);
}
