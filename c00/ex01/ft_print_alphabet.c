/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:46:52 by glashli           #+#    #+#             */
/*   Updated: 2021/06/24 19:47:00 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 'a';
	while (count != 'z' + 1)
	{
		write(1, &count, 1);
		count++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
