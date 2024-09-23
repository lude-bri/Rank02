#include "ft_list.h"

/*
	ft_list_foreach

	This function applies a given function `f` to each element of a linked list starting from `begin_list`.

	- The function takes two arguments:
		- `begin_list`: A pointer to the first node in the linked list.
		- `f`: A pointer to a function that takes a void pointer and returns nothing.
	
	- The loop runs while `begin_list` is not `NULL`, applying the function `f` to the `data` of each node and moving to the next node in the list.
*/
void	ft_list_forearch(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
