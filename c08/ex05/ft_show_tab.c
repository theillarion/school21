#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_pow_nb(unsigned int nb, int degree)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (degree == 0)
		return (1);
	else if (degree == 1)
		return (nb);
	while (degree >= 0 && i != degree)
	{
		result *= nb;
		i++;
	}
	return (result);
}

int	ft_get_char(unsigned int	nb, unsigned int	index)
{
	unsigned int	i;
	unsigned int	current_count;

	i = 0;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	current_count = i - 1;
	while (i != index)
	{
		nb %= ft_pow_nb(10, current_count);
		current_count--;
		i++;
	}
	return ((nb / (ft_pow_nb(10, current_count))) + 48);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;
	unsigned int	size;
	char			current_char;

	if (nb <= 9)
	{
		current_char = nb + 48;
		write(1, &current_char, 1);
		return ;
	}
	i = 0;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	size = i;
	while (i != size)
	{
		current_char = ft_get_char(nb, i);
		write(1, &current_char, 1);
		i++;
	}
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_show_tab(struct s_stock_str	*par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, ft_strlen(par[i].str));
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, ft_strlen(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}
