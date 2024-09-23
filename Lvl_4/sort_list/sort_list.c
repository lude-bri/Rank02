#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	int	data;
	struct s_list *next;

}	t_list;

/*
	sort_list

	This function sorts a linked list of integers in ascending order using a comparison function `cmp`.

	- Parameters:
		- `lst`: A pointer to the first node of the linked list.
		- `cmp`: A comparison function that takes two integers and returns 0 if they are in the correct order (ascending).
	
	- The function works similarly to Bubble Sort, iterating through the list and swapping elements if they are in the wrong order.
	
	- If a swap is made, the iteration restarts from the beginning of the list to ensure all elements are correctly ordered.
		- `lst_start` is used to store the head of the list, so we can return to the start of the list when needed.
		- The function continues iterating until no more swaps are needed.
	
	- The function returns the pointer to the sorted list.
*/
t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *lst_start;
	int tmp;

	if (!lst)
		return NULL;
	lst_start = lst;
	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			ft_swap(&lst->data, &lst->next->data);
			lst = lst_start;
		}
		else
			lst = lst->next;
	}
	lst = lst_start;
	return (lst);
}

int ascending(int a, int b)
{
	return (a <= b);
}

int desceding(int a, int b)
{
	return (a >= b);
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main (void)
{
	t_list *a, *b, *c;
	t_list *sort, *start;
	
	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	c = malloc(sizeof(t_list));

	a->data = 2;
	a->next = b;
	b->data = 3;
	b->next = c;
	c->data = 1;
	c->next = NULL;

	start = sort;
	sort = sort_list(a, &ascending);
	printf("ASCENDING : \n");
	while (sort)
	{
		printf("[%d]", sort->data);
		sort = sort->next;
	}
	printf("\n");

	sort = start;
	sort = sort_list(a, &desceding);
	printf("DESCENDING : \n");
	while (sort)
	{
		printf("[%d]", sort->data);
		sort = sort->next;
	}
}
