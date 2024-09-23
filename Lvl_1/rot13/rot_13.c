#include <unistd.h>

/*
	rot13

	This program takes a string as an argument and applies the ROT13 cipher to its alphabetic characters.
	rot13 shifts each letter by 13 positions in the alphabet, wrapping around when necessary.

	- We check if the number of arguments (`ac`) is 2, meaning the program is called with one argument.
	- If valid:
		- We initialize an index `i` to 0 to iterate through the string.
		- The loop runs while the current character in the string (`av[1][i]`) is not null:
			- If the character is a lowercase letter between 'a' and 'm' or an uppercase letter between 'A' and 'M':
				- Add 13 to the character's ASCII value to shift it forward by 13 positions.
			- If the character is a lowercase letter between 'n' and 'z' or an uppercase letter between 'N' and 'Z':
				- Subtract 13 from the character's ASCII value to shift it backward by 13 positions.
			- Write the transformed character to the standard output.
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
			if ((av[1][i] >= 'a' && av[1][i] <= 'm') || (av[1][i] >= 'A' && av[1][i] <= 'M'))
				av[1][i] += 13;
			else if ((av[1][i] >= 'n' && av[1][i] <= 'z') || (av[1][i] >= 'N' && av[1][i] <= 'Z'))
				av[1][i] -= 13;
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
