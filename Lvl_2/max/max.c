#include <stdio.h>

//enquanto o valor do index for menor que o numero de elementos do array
//	se o valor desse elemento for maior que max, retorna o max
//		se nao for, agora o max vai ser esse valor;
//		REPITIR ATE ENCONTRAR O MAIOR;

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

