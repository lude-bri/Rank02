#include <stdio.h>
#include <stdlib.h>

/*
	fprime

	This program performs prime factorization on an integer passed as a command-line argument. It prints the prime factors of the number, separated by '*' if there are multiple factors.

	- If the number of arguments (`argc`) is not 2, the program will simply print a newline.
	- If an integer is passed as an argument:
		- The program converts the input string into an integer using `atoi`.
		- It then begins checking for prime factors starting with `n = 2` (the smallest prime number).
		- The loop runs until `nbr` is less than `n`, checking if `n` divides `nbr` without a remainder.
			- If `n` divides `nbr`, it prints `n` as a prime factor.
			- If there are more factors to print, it prints a '*' and continues dividing `nbr` by `n`.
			- If `n` does not divide `nbr`, it increments `n` to check the next potential factor.
		- The program prints the prime factors in increasing order.
	
	- Finally, it prints a newline to conclude the output and returns `0` to indicate successful execution.
*/
int main(int argc, char *argv[]) 
{
	int nbr;
	int n;

	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		if (nbr == 1)
			printf("1");
		n = 2;
		while (nbr >= n)
		{
			if ((nbr % n) == 0)
			{
				printf("%d", n);
				if (nbr == n)
					break;
				printf("*");
				nbr /= n;
				n = 2;
			}
			++n;
		}
	}
	printf("\n");
	return 0;
}

