#include "ft_list.h"

t_list	*ft_list_push_strs(int	size, char	**strs)
{
	t_list	*head;
	t_list	*current;
	int		i;

	head = ft_create_elem(strs[0]);
	i = 1;
	while (i < size)
	{
		current = ft_create_elem(strs[i]);
		current->next = head;
		head = current;
		i++;
	}
	return (head);
}
