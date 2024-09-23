#include "list.h"

/*
	ft_list_remove_if (Iterative)

	This function removes elements from a linked list where the data matches the reference `data_ref` using the comparison function `cmp`.

	- The function takes three arguments:
		- `begin_list`: A double pointer to the beginning of the list.
		- `data_ref`: The data reference to compare with each node's data.
		- `cmp`: A function pointer used to compare the node's data with `data_ref`.

	- The function iterates through the list:
		- If the data in the next node matches `data_ref`, the node is removed from the list and freed.
		- The list is updated by linking the current node to the node after the one being removed.
	
	- At the end of the loop, the function also checks the head node separately in case it also matches `data_ref`.

	- This version uses a loop to handle node removal and traverses the list iteratively.
*/
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

/*
	ft_list_remove_if (Recursive)

	This function recursively removes elements from a linked list where the data matches the reference `data_ref` using the comparison function `cmp`.

	- The function takes three arguments:
		- `begin_list`: A double pointer to the beginning of the list.
		- `data_ref`: The data reference to compare with each node's data.
		- `cmp`: A function pointer used to compare the node's data with `data_ref`.

	- The function uses recursion to:
		- Check if the current node matches `data_ref`. If so, the node is removed and freed.
		- Recursively call itself on the next node.
	
	- The recursive function ensures all nodes in the list are checked, including the head node, for potential matches and removal.
*/
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

