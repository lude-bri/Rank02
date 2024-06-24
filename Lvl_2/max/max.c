#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int i = 0;
	int max = 0;

	while (i++ < len)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}

int main (void)
{
	int tab[] = {0, 1, 2, 42, 4, 5};

	int max_val = max(tab, 5);

	printf ("%d\n", max_val);
	return (0);
}

