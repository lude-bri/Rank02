#include <stdio.h>

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
