#include <unistd.h>

/*
	print_bits

	This function prints the binary representation of a given `unsigned char` (an 8-bit value).

	- We initialize a variable `n` to 8, representing the number of bits in a byte (since `unsigned char` is 8 bits).
	- The `bit` variable will hold each bit as a character ('0' or '1').

	- The loop runs while `n` is greater than 0:
		- In each iteration, we right-shift the `octet` by `n` bits and use the bitwise AND operation (`& 1`) to isolate the least significant bit.
		- We then add `'0'` to convert the numeric value (0 or 1) to its ASCII representation.
		- The resulting character (`bit`) is written to the standard output using `write`.
		- `n` is decremented, shifting the focus to the next bit.

	- The loop continues until all 8 bits of the `octet` have been processed, resulting in the full binary representation being printed.
*/
void	print_bits(unsigned char octet)
{
	int n = 8;
	char bit;

	while (n--)
	{
		bit = (octet >> n & 1) + '0';
		write (1, &bit, 1);
	}
}
