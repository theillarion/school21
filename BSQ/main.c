#include "bsq.h"

void	standart_input(t_map	*map)
{
	map = malloc(sizeof(t_map));
	if (stdin_map(map) != 0)
		ft_stderr_map();
	else
		ft_algorithm(map);
	if (map != NULL)
		ft_memory_clean_map(map);
}

void	read_files(t_map	*map, int	argc, char	**argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_check_1_line(argv[i]) != 1
			|| ft_check_map(argv[i], ft_get_symbols_file(argv[i])) != 1)
			ft_stderr_map();
		else
		{
			map = ft_create_map(argv[i]);
			if (map == NULL || ft_check_comlete_map(map) != 1)
				ft_stderr_map();
			else
				ft_algorithm(map);
			if (map != NULL)
				ft_memory_clean_map(map);
		}
		i++;
	}
}

int	main(int	argc, char	**argv)
{
	t_map	*map;

	map = NULL;
	if (argc == 1)
		standart_input(map);
	else
		read_files(map, argc, argv);
	return (0);
}
