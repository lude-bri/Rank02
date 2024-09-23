#include <stdio.h>
#include <unistd.h>

/*
	last_word

	This program takes a string as an argument and prints the last word in the string.
	A word is defined as a sequence of non-space characters, and spaces are skipped.

	- We check if the number of arguments (`ac`) is 2, meaning the program is called with one argument.
	
	- If valid:
		- We initialize the following variables:
			- `i` to 0, which will be used to find the end of the string.
			- `word_end` will store the index of the last character of the last word.
			- `word_start` will store the index of the first character of the last word.
		
		- The first loop iterates to find the length of the string by moving `i` to the null terminator.
		- We decrement `i` by 1 to avoid the null terminator and move `i` backward, skipping trailing spaces using `ft_is_space`.
		
		- Once the spaces are skipped, we set `word_end` to the index of the last character of the last word.
		- We continue moving `i` backward until a space or the start of the string is found, marking the beginning of the last word.
		- `word_start` is set to `i + 1` to point to the first character of the last word.
		
		- The final loop prints the characters from `word_start` to `word_end` using `write`, one by one.

	- After printing the last word, the program outputs a newline (`'\n'`).
	- Finally, the function returns `0` to indicate successful execution.
*/
int ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int word_end;
		int word_start;

		while (av[1][i])
			i++;
		--i;
		while (ft_is_space(av[1][i]))
			--i;
		word_end = i;
		while (av[1][i] && !ft_is_space(av[1][i]))
			--i;
		word_start = (i + 1);
		while (word_start <= word_end)
		{
			write (1, &av[1][word_start], 1);
			word_start++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
