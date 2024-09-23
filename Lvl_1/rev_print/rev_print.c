#include <unistd.h>

/*
	rev_print

	This program takes a string as an argument and prints it in reverse order.

	- We check if the number of arguments (`ac`) is 2, meaning the program is called with one argument.
	- If valid:
		- We initialize an index `i` to 0.
		- The first loop increments `i` while the string `av[1][i]` is not null, effectively calculating the length of the string.
		- The second loop prints the characters of the string in reverse order by decrementing `i`.
			- In each iteration of the second loop, the character at `av[1][i]` is written to the standard output.
	- After all characters have been printed in reverse, print a newline (`'\n'`).
	- Finally, return `0` to indicate successful execution.
*/
int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
			i++;
		while (i--)
			write(1, &av[1][i], 1);
	}
	write (1, "\n", 1);
	return (0);
}
