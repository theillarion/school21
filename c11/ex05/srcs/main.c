#include "ft.h"

int	main(int argc, char	*argv[])
{
	if (argc == 1)
		return (-1);
	else if (argc == 4 && (argv[2][0] == '+' || argv[2][0] == '-'
		|| argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%')
		&& argv[2][1] == '\0')
		ft_stdout(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]);
	else
		write(1, "0\n", 2);
	return (0);
}
