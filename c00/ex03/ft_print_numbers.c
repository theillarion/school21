/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:47:39 by glashli           #+#    #+#             */
/*   Updated: 2021/06/24 19:47:55 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	count;

	count = '0';
	while (count != '9' + 1)
	{
		write(1, &count, 1);
		count++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
