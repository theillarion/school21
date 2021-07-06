#include "ft.h"

void	ft_file(char	*name_prog, char	*name_argv)
{
	int	file;

	file = open(name_argv, O_RDONLY);
	if (file == -1)
		ft_stderr(name_prog, name_argv);
	else
		ft_stdout(file, name_prog, name_argv);
}
