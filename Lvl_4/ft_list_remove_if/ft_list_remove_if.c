#include "list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp()))
{
	t_list *to_free;
	t_list *current;

	current = *begin_list;
	while(current->next)
	{
		if ((*cmp)(current->next->data, data_ref) == 0)
		{
			to_free = current->next;
			current->next = current->next->next;
			free(to_free);
		}
		current = current->next;
	}
	current = *begin_list;
	if (current && (*cmp)(current->next->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;

	if (!begin_list || !*begin_list)
		return ;
	
	current = *begin_list;
	if ((*cmp)(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free (current);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	current = *begin_list;
	ft_list_remove_if(&current->next, data_ref, cmp);
}

