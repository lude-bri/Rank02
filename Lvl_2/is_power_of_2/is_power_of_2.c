#include <stdio.h>

/*
	is_power_of_2

	This function checks if the given unsigned integer `n` is a power of 2.
	It returns 1 if `n` is a power of 2, and 0 otherwise.

	- The function uses a bitwise operation to determine if `n` is a power of 2.
	- The expression `n && !(n & (n - 1))` works as follows:
		- `n`: This checks if `n` is not zero. A power of 2 is always positive, and 0 is not a power of 2, so this check eliminates 0.
		- `(n & (n - 1))`: This checks if `n` is a power of 2.
			- For a power of 2, there is exactly one bit set to 1 in its binary representation.
			- Subtracting 1 from `n` will flip all the bits to the right of the single set bit.
			- The bitwise AND of `n` and `n - 1` will be zero if `n` is a power of 2 because they don't share any common set bits.
	- The function returns 1 if `n` is a power of 2, and 0 otherwise.
*/
int	is_power_of_2(unsigned int n)
{
	return (n && !(n & (n - 1)));
}
