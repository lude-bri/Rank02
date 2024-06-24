#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	int	data;
	struct s_list *next;

}	t_list;

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
