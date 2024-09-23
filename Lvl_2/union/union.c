#include <unistd.h>

/*
	union

	This program takes two strings as input and prints the characters that appear in either string exactly once, in the order they first appear.
	The program ensures that no character is printed more than once.

	- We check if the number of arguments (`ac`) is 3, meaning the program is called with two strings.

	- If valid:
		- We initialize an index `i` to 0 to iterate through the strings.
		- We also declare an array `ascii[256]` and initialize it to 0. This array tracks whether a character has already been printed.
			- The array index represents the ASCII value of the characters. When a character is printed, we set `ascii[(int)av[1][i]]` or `ascii[(int)av[2][i]]` to 1 to avoid printing it again.
		
		- The first loop iterates through the characters of the first string (`av[1]`):
			- If the character has not been printed yet (`ascii[(int)av[1][i]] == 0`), print it and mark it as printed by setting `ascii[(int)av[1][i]]` to 1.
			- Continue to the next character in `av[1]`.
		
		- The second loop iterates through the characters of the second string (`av[2]`):
			- If the character has not been printed yet (`ascii[(int)av[2][i]] == 0`), print it and mark it as printed by setting `ascii[(int)av[2][i]]` to 1.
			- Continue to the next character in `av[2]`.
	
	- After processing both strings, the program prints a newline (`'\n'`).
	- Finally, return `0` to indicate successful execution.
*/
int main (int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int ascii[256] = {0};

		while (av[1][i])
		{
			if (ascii[(int)av[1][i]] == 0)
			{
				ascii[(int)av[1][i]] = 1;
				write (1, &av[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (ascii[(int)av[2][i]] == 0)
			{
				ascii[(int)av[2][i]] = 1;
				write (1, &av[2][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
