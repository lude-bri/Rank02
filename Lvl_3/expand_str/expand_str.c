#include <unistd.h>

/*
	expand_str

	This program takes a string as an argument, trims leading spaces, and prints the words of the string separated by exactly three spaces.
	Multiple spaces between words are reduced to three, and no trailing spaces are printed after the last word.

	- We initialize two variables:
		- `i` to 0, which will be used to iterate through the string.
		- `space` to 0, which will help track whether spaces should be printed between words.
		
	- We check if the number of arguments (`ac`) is 2 and if the input string `av[1]` is not empty.

	- If valid:
		- First, we skip any leading spaces in the string using a loop that advances `i` while the current character is a space.

		- The main loop processes the string:
			- If a space is encountered, we set the `space` flag to 1, meaning that when the next word starts, three spaces will be printed before it.
			- If a non-space character is encountered, we check the `space` flag:
				- If `space == 1`, we print three spaces before printing the word and reset `space` to 0.
				- Then, the character of the word is printed.
		
	- After processing the input string, we print a newline (`'\n'`).

	- Finally, return `0` to indicate successful execution.
*/
int main (int ac, char **av)
{
	int i = 0, space = 0;

	if (ac == 2 && av[1][i])
	{
		while (ft_is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (ft_is_space(av[1][i]))
				space = 1;
			if (!ft_is_space(av[1][i]))
			{
				if (space == 1)
					write (1, "   ", 3);
				space = 0;
				write (1, &av[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

int ft_is_space(char c)
{
	return ((c == ' ') || (c >= '\t' && c <= '\r'));
}
