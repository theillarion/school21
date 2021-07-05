/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:59:40 by glashli           #+#    #+#             */
/*   Updated: 2021/06/24 19:59:47 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	get_size(int number)
{
	int	count;

	count = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return (count);
}

int	pow_(int x, int a)
{
	int	count;
	int	res;

	count = 1;
	res = x;
	if (a == 0)
		return (1);
	else if (a == 1)
		return (x);
	while (a >= 0 && count != a)
	{
		res *= 10;
		count++;
	}
	return (res);
}

void	ft_putnbr(int nb)
{
	int		del;
	char	current_symbol;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	del = get_size(nb) - 1;
	while (del + 1 != 0)
	{
		current_symbol = '0' + (nb / pow_(10, del));
		write(1, &current_symbol, 1);
		nb %= pow_(10, del);
		del--;
	}
}

int	main(void)
{
	ft_putnbr(42);
	return (0);
}
