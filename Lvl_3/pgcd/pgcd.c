#include <stdio.h>

/*
	pgcd (Greatest Common Divisor - GCD)

	This function calculates the greatest common divisor (GCD) of two numbers `a` and `b` using the Euclidean algorithm.

	- The Euclidean algorithm works as follows:
		- If `b` divides `a` exactly (i.e., `a % b == 0`), then `b` is the GCD.
		- Otherwise, the GCD of `a` and `b` is the same as the GCD of `b` and `a % b`.
		- This process continues recursively until the remainder is zero, at which point the last non-zero remainder is the GCD.

	- The function returns the GCD of `a` and `b`.
*/
unsigned int pgcd(unsigned int a, unsigned int b)
{
	if ((a % b) == 0)
		return (b);
	return (pgcd(b, (a % b));
}
