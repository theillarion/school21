/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glashli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 10:29:17 by glashli           #+#    #+#             */
/*   Updated: 2021/06/26 10:29:22 by glashli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	stop_position;
	int	count;
	int	temp;

	stop_position = size / 2;
	count = 0;
	while (count != stop_position)
	{
		temp = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = temp;
		count++;
	}
}
