#include <unistd.h>

/*
	rotone

	This program takes a string as an argument and shifts each alphabetic character forward by 1 in the alphabet.
	For 'z' or 'Z', it wraps around to 'a' or 'A' respectively.

	- We check if the number of arguments (`ac`) is 2, meaning the program is called with one argument.
	- If valid:
		- We initialize an index `i` to 0 to iterate through the string.
		- The loop runs while the current character in the string (`av[1][i]`) is not null:
			- If the character is 'z' or 'Z':
				- Subtract 25 to wrap around to 'a' or 'A'.
			- If the character is an uppercase or lowercase letter (checked using `ft_is_upper` or `ft_is_lower`):
				- Add 1 to the character's ASCII value to shift it forward by 1 in the alphabet.
			- Write the transformed character to the standard output.
			- Increment `i` to move to the next character.
	- After all characters have been processed, print a newline (`'\n'`).
	- Finally, return `0` to indicate successful execution.
*/
int ft_is_upper(char c)
{
	return ((c >= 'A') && (c <= 'Y'));
}
int ft_is_lower(char c)
{
	return ((c >= 'a') && (c <= 'y'));
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (av[1][i] == 'z' || av[1][i] == 'Z')
				av[1][i] -= 25;
			else if (ft_is_upper(av[1][i]) || ft_is_lower(av[1][i]))
				av[1][i] += 1;
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
