#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
	int len = 0;
	int n = nbr;
	if (nbr <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	char *result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	//ZERO
	if(nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	//NEGATIVO
	if(nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		result[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);
}

int main (void)
{
	printf("%s\n", ft_itoa(5));
}

