#include "ft.h"

void	ft_stdout(int	file, char	*name_prog, char	*name_argv)
{
	int		size;
	char	buff[8192];

	size = read(file, buff, 8191);
	if (size == -1)
		ft_stderr(name_prog, name_argv);
	else
	{
		while (size != 0)
		{
			write(1, buff, size);
			size = read(file, buff, 8191);
		}
	}
}

void	ft_stdout2(void)
{
	int		size;
	char	buff[8192];

	size = read(1, buff, 8191);
	while (size != 0)
	{
		write(1, buff, size);
		size = read(1, buff, 8191);
	}
}
