#include <unistd.h>

/*
	search_and_replace

	This program takes a string and two single characters as arguments. 
	It replaces every occurrence of the first character in the string with the second character.

	- We check if the number of arguments (`ac`) is 4, and both the second (`av[2]`) and third (`av[3]`) arguments are single characters 
	  (checked by ensuring `av[2][1]` and `av[3][1]` are null, meaning they contain only one character).
	- If valid:
		- We initialize an index `i` to 0 to iterate through the string (`av[1]`).
		- The loop runs while the current character in the string (`av[1][i]`) is not null:
			- If the current character matches the first character (`av[2][0]`), replace it with the second character (`av[3][0]`).
			- Write the current or modified character to the standard output.
			- Increment `i` to move to the next character.
	- After all characters have been processed, print a newline (`'\n'`).
	- Finally, return `0` to indicate successful execution.
*/
int main(int ac, char **av)
{
	if (ac == 4 && !av[2][1] && !av[3][1])
	{
		int i = 0; 

		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
