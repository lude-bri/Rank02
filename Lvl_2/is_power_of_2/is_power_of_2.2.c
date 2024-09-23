#include <stdio.h>

/*
	is_power_of_2

	This function checks if the given unsigned integer `n` is a power of 2.
	It returns 1 if `n` is a power of 2, and 0 otherwise.

	- We initialize a variable `i` to 2, which is the first power of 2 (2^1).
	
	- The loop runs as long as `i` is less than or equal to `n`:
		- If `i` equals `n`, it means `n` is a power of 2, so we return 1.
		- If not, multiply `i` by 2 to get the next power of 2.
	
	- If the loop finishes without `i` being equal to `n`, then `n` is not a power of 2, so we return 0.
	
	- Note: This approach uses a linear search through powers of 2, starting from 2. It multiplies `i` by 2 in each iteration until it either finds a match or exceeds `n`.
*/
int	    is_power_of_2(unsigned int n)
{
	unsigned int i;

	i = 2;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}
