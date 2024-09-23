#include <stdio.h>

/*
	lcm (Least Common Multiple)

	This function calculates the least common multiple (LCM) of two non-negative integers `a` and `b` using an iterative approach.
	
	- We initialize `c` to the larger of `a` or `b` since the LCM must be at least as large as the larger number.
	
	- The function first checks for edge cases:
		- If either `a` or `b` is zero, the LCM is 0 (as any number multiplied by 0 is 0).
	
	- The main loop runs indefinitely (`while (1)`), incrementing `c` until we find the first value that is divisible by both `a` and `b`:
		- If `c` is divisible by both `a` and `b`, we return `c` as the LCM.
		- If not, increment `c` and repeat the check.
	
	- This approach iteratively finds the smallest common multiple that is divisible by both `a` and `b`.

	- Note: Although this method works, it is less efficient compared to calculating the LCM using the formula `lcm(a, b) = (a * b) / gcd(a, b)` since this method performs repeated modulus operations and increments `c` one step at a time.
*/
unsigned int  lcm(unsigned int a, unsigned int b)
{
  unsigned int c = ((a > b) ? a : b);

      if ((a == 0) || (b == 0))
            return (0);
      while (1)
      {
          if ((c % a == 0) && (c % b == 0))
            return (c);
          c++;
      }
}
