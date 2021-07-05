#include <unistd.h>

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

int	main(int argc, char	*argv[])
{
	unsigned int	i;

	i = argc - 1;
	while ((int)i > 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
