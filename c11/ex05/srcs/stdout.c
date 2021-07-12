#include "ft.h"

void	ft_stdout(int number_1, int	number_2, char	operation)
{
	int	(*arr[5])(int	argv1, int	argv2);

	arr[0] = &ft_operation_plus;
	arr[1] = &ft_operation_minus;
	arr[2] = &ft_operation_multiply;
	arr[3] = &operation_dif;
	arr[4] = &ft_operation_mod;
	if (number_2 == 0 && operation == '/')
		ft_stderr(-1);
	else if (number_2 == 0 && operation == '%')
		ft_stderr(-2);
	else
	{
		if (operation == '+')
			ft_putnbr((*arr[0])(number_1, number_2));
		else if (operation == '-')
			ft_putnbr((*arr[1])(number_1, number_2));
		else if (operation == '*')
			ft_putnbr((*arr[2])(number_1, number_2));
		else if (operation == '/')
			ft_putnbr((*arr[3])(number_1, number_2));
		else if (operation == '%')
			ft_putnbr((*arr[4])(number_1, number_2));
		write(1, "\n", 1);
	}
}
