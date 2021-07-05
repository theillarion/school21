/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:47:16 by glashli           #+#    #+#             */
/*   Updated: 2021/06/24 19:47:25 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	count;

	count = 'z';
	while (count != 'a' - 1)
	{
		write(1, &count, 1);
		count--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
