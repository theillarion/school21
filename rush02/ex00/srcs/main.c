#include "header.h"

int main(int argc,	char	*argv[])
{
	char	*name_file;
	char	*all_file;
	char	**new_all_file;
	int		size_file;
	int		read_size;
	int		count_string;
	int 	file;
	t_map	*map;

	if (argc == 2 || argc == 3)
	{
		if (argc == 2)
			name_file = "numbers.dict";
		else
			name_file = argv[1];
		size_file = get_size_file(name_file);
		count_string = get_count_strings(name_file);
		if (size_file == -1 || count_string == -1)
		{
			ft_stderr(-1);
			return (-1);
		}
		file = open(name_file, O_RDONLY);
		if (file == -1)
		{
			ft_stderr(-1);
			return (-1);
		}

		all_file = malloc(sizeof(char) * size_file);
		read_size = read(file, all_file, size_file);
		if (read_size != size_file)
		{
			ft_stderr(-1);
			return (-1);
		}

		new_all_file = array_to_double_array(all_file, count_string);
		if (new_all_file == NULL)
		{
			ft_stderr(-1);
			return (-1);
		}

		free(all_file);
		map = malloc(sizeof(t_map) * (count_string + 1));
		init_map(map, count_string + 1);
		if (build_struct(new_all_file, count_string, map) < 1)
		{
			ft_stderr(-1);
			return (-1);
		}
		if (argc == 2)
			ft_print_nbr_in_words(map, ft_strlen(argv[1]), argv[1], count_string);
		else
			ft_print_nbr_in_words(map, ft_strlen(argv[2]), argv[2], count_string);
	}
	else
		ft_stderr(-2);
	return (0);
}
