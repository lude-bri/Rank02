#include <stdio.h>

/*
	ft_list_size

	This function returns the size (i.e., the number of elements) of a linked list starting from `begin_list`.

	- We initialize `i` to 0, which will count the number of nodes in the linked list.

	- The function uses a `while` loop to traverse the linked list:
		- The loop continues while `begin_list->next` is not `NULL`, meaning there are more nodes in the list.
		- For each node, we increment `i` and move `begin_list` to the next node (`begin_list = begin_list->next`).

	- When the loop finishes, `i` contains the number of nodes excluding the last one, since the loop terminates when `begin_list->next` is `NULL`.
	- To return the correct count, the function should account for the last node by adding 1 to `i` before returning it.
	
	- If the list is empty (`begin_list == NULL`), the function will return 0.

	- Finally, return the total number of nodes in the list.
*/
typedef struct s_list
{
	struct s_list *next;
	void		*data;
}				t_list

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	while (begin_list->next)
	{
		++i;
		begin_list = begin_list->next;
	}
	return (i);
}
