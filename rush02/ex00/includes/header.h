#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_map
{
	int		*number;
	char	*string;
	int		size;
}	t_map;

//	file.c
int	get_count_strings(char	*name_file);
int	get_size_file(char	*name_file);

//		memory.c
char	*ft_memset(char	*str, char	del, int	size);

//		outpur_streams.c
void	ft_stdout(char	*str);
void	ft_stderr(int	err);

//		map.c
void	ft_map_push(t_map	*map, int	*key, char	*value, int size);
char	*get_value(t_map	*map, int	*key);

//		array.c
char	**array_to_double_array(char	*str, int count_strings);
char	*delete_spaces(char	*str);

//		strings.c
int		ft_intcmp(int *s1, int *s2);
int		ft_strcmp(char *s1, char *s2);
int		find(char	*str,	char	del);
int		ft_strlen(char	*str);
void	ft_putstr(char	*str);
char	*ft_strncat(char *dest, char *src, unsigned int	pos, unsigned int nb);

//		build.c
int		find_index(char	*str,	char	del, int	i);
int		check_is_printable(char	*str, int	start, int	end);
char	*parser_string(char	*str);
int		build_struct(char	**str, int	count_string, t_map *map);
void	init_map(t_map *map, int count);
int		length_int(int	*arr);

void	output_number(int	*arr, int size);
int		*ft_atoi(char	*str);

int		ft_atoi_2(char *str);
int		get_len(int nbr);
int		ft_shift_plus_minus(char *str);
int		ft_operator(char *str);
int		ft_shift_wspace(char *str);
char	*str_to_int(int *number);
char	*ft_itoa(int nbr);
void	ft_print_nbr_in_words(t_map *dict, int strlen, char *str, int dict_len);

#endif
