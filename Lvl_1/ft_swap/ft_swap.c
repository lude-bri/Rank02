#include <stdio.h>

/*
	ft_swap

	This function swaps the values of two characters (pointers to char).

	- We declare a temporary variable `tmp` to hold the value of `*a` (the value pointed to by `a`).
	- Assign the value of `*b` to `*a`, effectively putting the value of `b` into `a`.
	- Assign the value stored in `tmp` (originally `*a`) to `*b`, completing the swap.
	- The function performs the swap without returning anything.
*/
char	ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
