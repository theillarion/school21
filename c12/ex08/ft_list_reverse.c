#include "ft_list.h"

void	ft_list_reverse(t_list	**begin_list)
{
	t_list	*prev_elem;
	t_list	*curr_elem;
	t_list	*next_elem;

	if (*begin_list != NULL && (*begin_list)->next != NULL)
	{
		prev_elem = NULL;
		curr_elem = *begin_list;
		next_elem = (*begin_list)->next;
		while (next_elem != NULL)
		{
			curr_elem->next = prev_elem;
			prev_elem = curr_elem;
			curr_elem = next_elem;
			next_elem = curr_elem->next;
		}
		curr_elem->next = prev_elem;
		*begin_list = curr_elem;
	}
}
