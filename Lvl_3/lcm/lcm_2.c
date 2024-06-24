#include <stdio.h>

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
