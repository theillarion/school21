#include "ft.h"

void	ft_stderr(char	*name_prog, char	*name_arg)
{
	ft_putstrerr(name_prog);
	ft_putstrerr(": ");
	ft_putstrerr(name_arg);
	ft_putstrerr(": ");
	ft_putstrerr(strerror(errno));
	ft_putstrerr("\n");
}
