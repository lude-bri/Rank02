#include <stdio.h>

/*
	reverse_bits

	This function reverses the order of the bits in the given `unsigned char` (8-bit value) and returns the reversed result.

	- We initialize two variables:
		- `n` is set to 8, representing the number of bits in a byte.
		- `rev` is used to store the reversed bits. It is initially uninitialized, so it will start with garbage value. It should be initialized to 0 for correctness.
	
	- The loop runs while `n` is greater than 0:
		- In each iteration, we left-shift `rev` by 1 to make space for the new bit that will be added.
		- We isolate the least significant bit of `octet` using `octet & 1`, then OR (`|=`) this bit with `rev` to append it to `rev`.
		- After appending the bit, we right-shift `octet` by 1 to move to the next bit.
		- This process repeats until all 8 bits of `octet` are processed, effectively reversing their order.
	
	- Once the loop is complete, `rev` will contain the reversed bit sequence of `octet`, and the function returns `rev`.
*/
unsigned char reverse_bits(unsigned char octet)
{
	unsigned int n = 8;
	unsigned char rev;

	while (n--)
	{
		rev <<= 1;
		rev |= (octet & 1);
		octet >>= 1;
	}
	return (rev);
}
