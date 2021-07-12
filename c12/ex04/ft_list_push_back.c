#include "ft_list.h"

void	ft_list_push_back(t_list	**begin_list, void	*data)
{
	t_list	*current;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		current = *begin_list;
		while (current->next != NULL)
			current = current->next;
		current->next = ft_create_elem(data);
	}
}
