/*
	Fizbuzz
 		While the number is less than 100, sum + 1
   			If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz'.
      			Else If the number is a multiple of 3, it prints 'fizz' instead.
	 		Else If the number is a multiple of 5, it prints 'buzz' instead.
    			If the number do not satisfy any of those conditions, simply write the number

*/



#include <unistd.h>

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	write (1, &"0123456789"[nbr % 10], 1);
}

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr(i);
		write (1, "\n", 1);
		i++;
	}
}
