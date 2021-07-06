#include "ft.h"

void	output_file(int	file, char	buff[1024])
{
	int		size;

	size = read(file, buff, 1023);
	while (size != 0)
	{
		write(1, buff, size);
		size = read(file, buff, 1023);
	}
}

int	main(int argc, char	*argv[])
{
	int		file;
	char	buff[1024];

	if (argc < 2)
		ft_putstrerr("File name missing.\n");
	else if (argc > 2)
		ft_putstrerr("Too many arguments.\n");
	else
	{
		file = open(argv[1], O_RDONLY);
		if (file == -1)
		{
			ft_putstrerr("Cannot read file.\n");
			return (file);
		}
		output_file(file, buff);
		close(file);
		return (0);
	}
}
