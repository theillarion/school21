/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:43:49 by glashli           #+#    #+#             */
/*   Updated: 2021/06/24 20:43:58 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '1';
	number[2] = '2';
	while (number[0] <= '7')
	{
		while (number[1] <= '8')
		{
			while (number[2] <= '9')
			{
				write(1, &number, 3);
				if (number[0] != '7')
					write(1, ", ", 2);
				number[2]++;
			}
			number[1]++;
			number[2] = number[1] + 1;
		}
		number[0]++;
		number[1] = number[0] + 1;
		number[2] = number[1] + 1;
	}
}

int	main(void)
{
	ft_print_comb();
}
