#include <stdlib.h>
#include <stdio.h>

/*
	ft_itoa

	This function converts an integer `nbr` to its string representation.

	- We first calculate the length of the string needed to represent the number.
		- If the number is negative, we add an extra character for the negative sign.
		- If the number is zero, we return the string "0".
	
	- After calculating the length, we allocate memory for the result string, ensuring that it is large enough to hold all digits and the null terminator.

	- If `nbr` is negative, we handle the sign and convert `nbr` to its positive equivalent.

	- We then fill the string from right to left, placing each digit at the correct position.

	- The function returns the string representation of `nbr`.
*/
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

