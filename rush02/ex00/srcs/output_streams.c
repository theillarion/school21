#include "header.h"

void	ft_stdout(char	*str)
{
	write(1, str, ft_strlen(str));
}


void	ft_stderr(int	err)
{
	if (err == -1)
		write(2, "Dict Error\n", 11);
	if (err == -2)
		write(2, "Error\n", 6);
}

void	output_number(int	*arr, int size)
{
	int 	i;
	char	letter;

	i = 0;
	while (i < size)
	{
		letter = arr[i] + '0';
		write(1,&letter, 1);
		i++;
	}
}
