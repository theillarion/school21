#ifndef FT_H
# define FT_H

# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/errno.h>
# include <unistd.h>
# include <errno.h>

void	ft_putstr(char	*str);
void	ft_putstrerr(char	*str);
int		ft_strlen(char	*str);
void	ft_stdout(int	file, char	*name_prog, char	*name_argv);
void	ft_stdout2(void);
void	ft_stderr(char	*name_prog, char	*name_arg);
void	ft_file(char	*name_prog, char	*name_argv);

#endif
