#include "ft_list.h"

void	ft_list_merge(t_list	**begin_list1, t_list	*begin_list2)
{
	while ((*begin_list1)->next != NULL)
		(*begin_list1) = (*begin_list1)->next;
	(*begin_list1)->next = begin_list2;
}
