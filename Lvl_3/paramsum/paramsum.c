#include <unistd.h>

/*
	paramsum

	This program counts the number of command-line arguments passed to it (excluding the program name) 
	and prints the result as an integer, followed by a newline.

	- The function `ft_putnbr` is used to print an integer number to the standard output.
		- If the number `nbr` is greater than 9, the function calls itself recursively, dividing `nbr` by 10 to process each digit.
		- Once the number is reduced to a single digit, it prints that digit by using the index of `"0123456789"`.

	- In the `main` function:
		- We take the number of command-line arguments (`ac`) and subtract 1 to exclude the program name itself.
		- We then call `ft_putnbr(ac - 1)` to print the count of arguments.
		- After printing the number, we write a newline (`'\n'`) to the output.

	- The program returns `0` to indicate successful execution.

	- This program is useful for checking how many command-line arguments were provided when running the program.
*/
void ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr((nbr / 10));
	write (1, &"0123456789"[nbr % 10], 1);
}

int main(int ac, char **av)
{
	(void)av;

	ft_putnbr(ac - 1);
	write (1, "\n", 1);
	return (0);
}
