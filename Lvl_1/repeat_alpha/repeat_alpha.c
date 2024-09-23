#include <unistd.h>

/*
	repeat_alpha

	This program takes a string as an argument and processes each character in the string.
	If a character is an uppercase letter, it is printed as many times as its position in the alphabet (A=1, B=2, ..., Z=26).
	If a character is a lowercase letter, it is printed as many times as its position in the alphabet (a=1, b=2, ..., z=26).
	Non-alphabetic characters are printed once, unchanged.

	- We check if the number of arguments (`ac`) is 2, meaning the program is called with one argument.
	- If valid:
		- We initialize two variables: `i` for iterating through the string, and `j` for controlling the number of repetitions.
		- The first loop processes each character in the string (while `av[1][i]` is not null).
			- If the character is uppercase (`ft_is_upper`):
				- Reset `j` to 0.
				- Use a nested loop to print the character `av[1][i]` as many times as its alphabetical position (using `av[1][i] - 64` to calculate position for uppercase letters).
			- If the character is lowercase (`ft_is_lower`):
				- Reset `j` to 0.
				- Use a nested loop to print the character `av[1][i]` as many times as its alphabetical position (using `av[1][i] - 96` to calculate position for lowercase letters).
			- If the character is not a letter, just print it once.
		- Increment `i` to move to the next character.
	- After processing all characters, print a newline (`'\n'`).
*/
int	ft_is_upper(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int	ft_is_lower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0, j = 0;
		while (av[1][i])
		{
			if (ft_is_upper(av[1][i]))
			{
				j = 0;
				while (j < av[1][i] - 64)
				{
					write (1, &av[1][i], 1);
					j++;
				}
			}
			if (ft_is_lower(av[1][i]))
			{
				j = 0;
				while (j < av[1][i] - 96)
				{
					write (1, &av[1][i], 1);
					j++;
				}
			}
			else
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
