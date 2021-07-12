#include "ft_list.h"

void	ft_list_remove_if(t_list	**begin_list, void	*data_ref,
int	(*cmp)(), void (*free_fct)(void *))
{
	t_list	*backup;

	while ((*begin_list)->next != NULL)
	{
		if ((*cmp)((*begin_list)->next->data, data_ref) == 0)
		{
			backup = (*begin_list)->next;
			(*free_fct)((*begin_list)->data);
			if ((*begin_list)->next->next == NULL)
				(*begin_list)->next = NULL;
			else
				(*begin_list)->next = (*begin_list)->next->next;
			free(backup);
		}
		begin_list = &(*begin_list)->next
	}
}
