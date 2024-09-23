#include <unistd.h>

/*
	rostring

	This program processes a string passed as a command-line argument and moves the first word of the string to the end of the string, maintaining the rest of the words in place.
	It trims extra spaces and ensures only one space separates each word.

	- If the number of arguments (`ac`) is greater than or equal to 2, the function proceeds with the processing:
		- `str` is set to point to the first argument (`av[1]`), which is the input string.
		- `c` is used to iterate through the string.
	
	- First, the program skips leading spaces using a `while` loop, and sets `word_start` to mark the start of the first word.
		- The first word is identified by skipping spaces and stopping at the first non-space character.
		- The `word_end` is set to mark the end of the first word.
	
	- After identifying the first word, the program skips any trailing spaces between words and begins processing the rest of the string.
	
	- The main loop processes the rest of the string:
		- It skips multiple spaces between words, ensuring that only one space is printed between them.
		- If a space is found, `space_found` is set to 1, which signals that a space should be printed before appending the first word later.
		- The program writes each non-space character as part of the remaining words.
	
	- Once the main loop finishes, the program checks if a space was found during processing (`space_found`):
		- If so, it prints a space to separate the first word, which will be moved to the end.
		- The first word, identified earlier using `word_start` and `word_end`, is printed after the rest of the string has been processed.

	- Finally, the program prints a newline.
*/
int ft_isspace(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int main (int ac, char **av)
{
	char *str;
	int word_start;
	int word_end;
	int space_found;
	int c;

	if (ac >= 2)
	{
		str = av[1];
		c = 0;
		while (ft_isspace(str[c]))
			c++;
		word_start = c;
		while (str[c] && !ft_isspace(str[c]))
			c++;
		word_end = c;
		while (ft_isspace(str[c]))
			c++;
		while (str[c])
		{
			while (ft_isspace(str[c]) && ft_isspace(str[c + 1]))
				c++;
			if (ft_isspace(str[c]))
				space_found = 1;
			write (1, &str[c++], 1);
		}
		if (space_found)
			write (1, " ", 1);
		while (word_start < word_end)
			write (1, &str[word_start++], 1);
	}
	write (1, "\n", 1);
	return (0);
}
