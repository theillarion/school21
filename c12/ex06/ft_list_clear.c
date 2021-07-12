#include "ft_list.h"

void	ft_list_clear(t_list	*begin_list, void	(*free_fct)(void *))
{
	t_list	*backup;

	while (begin_list != NULL)
	{
		backup = begin_list;
		(*free_fct)(begin_list->data);
		begin_list = begin_list->next;
		free(backup);
	}
}
