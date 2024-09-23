#include <unistd.h>

/*
	ulstr

	This program takes a string as an argument and toggles the case of each letter.
	If a letter is lowercase, it is converted to uppercase, and if it is uppercase, it is converted to lowercase.

	- We check if the number of arguments (`ac`) is 2, meaning the program is called with one argument.
	- If valid:
		- We initialize an index `i` to 0 to iterate through the string (`av[1]`).
		- The loop runs while the current character in the string (`av[1][i]`) is not null:
			- If the character is a lowercase letter ('a' to 'z'), subtract 32 from its ASCII value to convert it to uppercase.
			- If the character is an uppercase letter ('A' to 'Z'), add 32 to its ASCII value to convert it to lowercase.
			- Write the toggled character to the standard output.
			- Increment `i` to move to the next character.
	- After all characters have been processed, print a newline (`'\n'`).
	- Finally, return `0` to indicate successful execution.
*/
int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
