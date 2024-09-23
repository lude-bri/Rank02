#include <unistd.h>

/*
	epur_str

	This program takes a string as an argument, trims leading spaces, and prints the words of the string separated by a single space. 
	Multiple spaces between words are reduced to one, and no trailing space is printed after the last word.

	- We check if the number of arguments (`ac`) is 2 and if the input string `av[1]` is not null.
	
	- If valid:
		- We initialize two variables:
			- `i` to 0, which will be used to iterate through the input string.
			- `space` to 0, which will help track whether spaces should be printed between words.
		
		- First, we skip any leading spaces in the string using a loop that advances `i` while the current character is a space.
		
		- Next, we enter the main loop that iterates over the string:
			- The first inner loop writes characters that are part of a word (i.e., not spaces) using `write`, and it advances `i` until a space or the end of the string is encountered.
			- The second inner loop skips over any consecutive spaces between words, setting `space` to 1 if spaces are found.
			
			- After encountering spaces, if `space` is set to 1 (meaning we've moved past a word and there are more words to come), we print a single space before the next word, and reset `space` to 0.
	
	- After processing the input string, we print a newline (`'\n'`).
	
	- Finally, return `0` to indicate successful execution.
*/
int main (int ac, char **av)
{
	if (ac == 2 && av[1])
	{
		int i = 0;
		int space = 0;

		while (av[1][i] && ft_is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			while (!ft_is_space(av[1][i]) && av[1][i])
				write (1, &av[1][i++], 1);
			while (ft_is_space(av[1][i]) && av[1][i])
			{
				space = 1;
				i++;
			}
			if (space)
				write (1, " ", 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}

int ft_is_space(char c)
{
	return ((c == ' ') || (c >= '\t' && c <= '\r'));
}
