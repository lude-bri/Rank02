#include <unistd.h>

/*
	tab_mult

	This program takes a single integer as input and prints its multiplication table from 1 to 9.
	- If the number of arguments (`ac`) is not 2, the program simply prints a newline and exits.

	- If a valid integer is provided:
		- The function converts the input string to an integer using `ft_atoi`.
		- The program then iterates from 1 to 9, printing each multiplication in the format:
			`i x n = result`, where `i` is the current number (from 1 to 9), `n` is the input number, and `result` is the product of `i * n`.

	- The function `ft_putnbr` is used to print the integers, and `write` is used to print the characters between the numbers (such as " x " and " = ").
*/
int	ft_atoi(char *str)
{
	int i = 0, res = 0; 

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	char c = nbr % 10 + '0';
	write (1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	int i = 1;
	int n = ft_atoi(av[1]);

	while (i < 10)
	{
		ft_putnbr(i);
		write (1, " x ", 3);
		ft_putnbr(n);
		write (1, " = ", 3);
		ft_putnbr(i * n);
		write (1, "\n", 1);
		i++;
	}
}
