#include "bsq.h"

void	ft_stdout_string(char	*str)
{
	write(1, str, ft_strlen(str));
}

void	ft_stdout_char(char	str)
{
	write(1, &str, 1);
}

int	ft_stderr_map(void)
{
	write(2, "map error\n", ft_strlen("map error\n"));
	return (-2);
}

int	ft_stderr_file(char	*file_program, char	*filename)
{
	write(2, file_program, ft_strlen(file_program));
	write(2, ": ", 2);
	write(2, filename, ft_strlen(filename));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
	return (-1);
}
