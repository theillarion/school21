#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char	*str);
int		ft_operation_plus(int	argv1, int	argv2);
int		ft_operation_minus(int	argv1, int	argv2);
int		ft_operation_multiply(int	argv1, int	argv2);
int		operation_dif(int	argv1, int	argv2);
int		ft_operation_mod(int	argv1, int	argv2);
void	ft_putchar(char c);
void	ft_putnbr(int number);
void	ft_stderr(int	err);
void	ft_stdout(int number_1, int	number_2, char	operation);

#endif
