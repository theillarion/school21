#include "ft.h"

int	main(int argc, char	*argv[])
{
	int		i;

	if (argc == 1)
		ft_stdout2();
	else if (argc > 1)
	{
		i = 1;
		while (i != argc)
		{
			if ((argv[1][0] == '-' && (argv[1][1] == '\0'
				|| (argv[1][1] == '-' && argv[1][2] == '\0')))
				|| (argv[i][0] == '-' && argv[i][1] == '\0'))
				ft_stdout2();
			else
				ft_file(argv[0], argv[i]);
			i++;
		}
	}
}
