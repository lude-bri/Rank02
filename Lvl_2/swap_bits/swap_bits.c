#include <stdio.h>

/*
	swap_bits

	This function swaps the higher and lower 4 bits of the given 8-bit `unsigned char` (`octet`).
	It returns the new `unsigned char` with the bits swapped.

	- The function works as follows:
		- `octet << 4`: Left-shift the `octet` by 4 bits, which moves the lower 4 bits to the higher 4-bit positions.
		- `octet >> 4`: Right-shift the `octet` by 4 bits, which moves the higher 4 bits to the lower 4-bit positions.
		- The result of these shifts is combined using the bitwise OR (`|`), effectively swapping the higher and lower nibbles (4 bits) of `octet`.

	- The function then returns the `octet` with swapped bits.
	- For example:
		- If `octet` is `10110010` (binary), after swapping, it becomes `00101011` (binary).
*/
unsigned char swap_bits(unsigned char octet)
{
	return ((octet << 4) | (octet >> 4));
}
