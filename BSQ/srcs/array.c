#include "bsq.h"

char	*ft_create_array(char	*filename, int	size_file)
{
	int		ds_file;
	int		current_size;
	char	symbol;
	char	*buff;

	buff = malloc(sizeof(char) * size_file);
	ds_file = open(filename, O_RDONLY);
	if (ds_file == -1)
		return (NULL);
	if (read(ds_file, &symbol, 1) == -1)
		return (NULL);
	while (symbol != '\n')
		read(ds_file, &symbol, 1);
	current_size = read(ds_file, buff, size_file);
	buff[size_file - 1] = '\0';
	if (current_size == -1 || current_size != size_file || close(ds_file))
		return (NULL);
	return (buff);
}

char	**ft_array_to_double_array(char	*str, int rows)
{
	char	**new_str;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	new_str = malloc(sizeof(char *) * rows);
	if (new_str == NULL || str == NULL)
		return (NULL);
	while (k < rows && str[i])
	{
		j = i;
		while (str[j] != '\n' && str[j])
			j++;
		new_str[k] = malloc(sizeof(char) * (j - i));
		if (new_str == NULL)
			return (NULL);
		ft_memset(new_str[k], '\0', j - i);
		ft_strncat(new_str[k], str, i, j - i);
		k++;
		i = j + 1;
	}
	return (new_str);
}
