#include "ft.h"

void	ft_stderr(int	err)
{
	if (err == -1)
		write(2, "Stop : division by zero\n", 24);
	else if (err == -2)
		write(2, "Stop : modulo by zero\n", 22);
}
