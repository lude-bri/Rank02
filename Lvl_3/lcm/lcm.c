#include <stdio.h>

unsigned int pgcd(unsigned int a, unsigned int b)
{
	if ((a % b) == 0)
		return (b);
	return (pgcd(b, (a % b));
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	return ((a * b) / pgcd(a, b));
}
