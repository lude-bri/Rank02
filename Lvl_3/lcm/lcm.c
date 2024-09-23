#include <stdio.h>

/*
	lcm (Least Common Multiple - LCM)

	This function calculates the least common multiple (LCM) of two numbers `a` and `b`.
	The formula for the LCM is:

		lcm(a, b) = (a * b) / gcd(a, b)

	- First, we calculate the GCD of `a` and `b` using the `pgcd` function.
	- Then, we compute the LCM using the formula above: multiplying `a` by `b` and dividing by their GCD.
	- The function returns the LCM of `a` and `b`.

	- Note: This formula works because the product of `a` and `b` divided by their GCD gives the smallest multiple that is divisible by both `a` and `b`.
*/
unsigned int lcm(unsigned int a, unsigned int b)
{
	return ((a * b) / pgcd(a, b));
}


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
