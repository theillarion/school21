/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:30:58 by glashli           #+#    #+#             */
/*   Updated: 2021/06/24 20:31:03 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int n_1, int	n_2)
{
	char	c_1[2];
	char	c_2[2];

	c_1[0] = (n_1 / 10) + '0';
	c_1[1] = (n_1 % 10) + '0';
	c_2[0] = (n_2 / 10) + '0';
	c_2[1] = (n_2 % 10) + '0';
	write(1, &c_1, 2);
	write(1, " ", 1);
	write(1, &c_2, 2);
	if (c_1[0] != '9' || c_1[1] != '8' || c_2[0] != '9' || c_2[1] != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	number_1;
	int	number_2;

	number_1 = 0;
	while (number_1 <= 99)
	{
		number_2 = number_1 + 1;
		while (number_2 <= 99)
		{	
			print(number_1, number_2);
			number_2++;
		}
		number_1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
