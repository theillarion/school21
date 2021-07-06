#include "ft.h"

void	ft_putstr(char	*str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putstrerr(char	*str)
{
	write(2, str, ft_strlen(str));
}
