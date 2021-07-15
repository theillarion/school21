#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

# define READ O_RDONLY

typedef struct s_map
{
	char	space;
	char	stone;
	char	result;
	int		rows;
	int		cols;
	char	**map;
}	t_map;

int		ft_char_is_printable(char c);
char	*ft_strjoin(char *s1, char *s2);

//		string.c
char	*ft_strncat(char *dest, char *src, unsigned int	pos, unsigned int nb);
int		ft_str_is_printable(char	*str);
int		ft_strlen(char *str);
int		ft_is_equal_elements(char	*str, int i);
int		is_include_only_symbols(char	*str,	char	*symbols, char	symbol);

//		file.c
char	*ft_get_symbols_file(char	*filename);
int		ft_get_rows_file(char	*name_file);
int		ft_get_cols_file(char	*name_file);
int		ft_get_size_file(char	*name_file);
int		ft_get_rows(char	*filename);

//		map.c
t_map	*ft_create_map(char	*filename);
void	ft_output_map(t_map	*map);

//		memory.c
char	*ft_memset(char	*str, char	del, int	size);
int		**ft_memory_allocation(int	rows, int	cols);
void	ft_memory_clean(int	**array, int	rows);
void	full_free(void	**ptr);
void	ft_memory_clean_map(t_map	*map);

//		output_streams.c
void	ft_stdout_string(char	*str);
void	ft_stdout_char(char	str);
int		ft_stderr_map(void);
int		ft_stderr_file(char	*file_program, char	*filename);

//		array.c
char	*ft_create_array(char	*filename, int	size_file);
char	**ft_array_to_double_array(char	*str, int rows);

//		algorithm.c
void	ft_fill_rows(t_map *map, int	**array, int	*max, int *backup);
void	ft_fill_cols(t_map *map, int	**array, int	*max, int *backup);
void	ft_fill_all_map(int	**array, t_map	*map, int	*max, int	*backup);
void	ft_fill_result(t_map	*map, int	max, int	*backup);
void	ft_algorithm(t_map *map);

//		int.c
int		ft_min(int	arg1, int	arg2, int	arg3);
int		is_digit(char c);
void	ft_add_number_to_nb(int *nb, char c, int *j);
int		ft_atoi(char *str, int *i);

//		find.c
int		ft_find(char	*str,	char	del);
int		ft_find_index(char	*str,	char	del, int	i);

//		validation.c
int		ft_check_map(char	*filename, char	*symbols);
int		ft_check_1_line(char	*filename);
int		ft_check_comlete_map(t_map	*map);

//		stdin_fun.c
char	*ft_read_con(void);
int		fill_symbols(char *str_stdin, t_map *tmap, int *i);
char	*get_syms_str(t_map *tmap);
int		stdin_map(t_map *tmap);

//		free
int		return_free(char	*buff);
int		return_free_2(char	*buff1, char	*buff2);

//		stdin_fun2.c
int		is_empty_str_err(int i, char *str_stdin);
int		nr_of_rows(char *str_stdin, int i);
int		check_errors(char *str_stdin, int i, char *sym_str, int number_of_rows);

#endif
