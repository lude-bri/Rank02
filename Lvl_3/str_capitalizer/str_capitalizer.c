#include <unistd.h>

/*
	str_capitalizer

	This function takes a string and capitalizes the first letter of each word while converting the rest of the letters to lowercase.
	- A word is defined as a sequence of non-space and non-tab characters, and the beginning of a word is identified by checking if the preceding character is a space or a tab.

	- We initialize `i` to 0 to iterate through the string `str`.

	- The first character in the string is handled separately:
		- If the first character is a lowercase letter, it is converted to uppercase by subtracting 32 from its ASCII value.
		- The character is then written to the standard output.

	- The loop processes each remaining character in the string:
		- If the current character is an uppercase letter, it is converted to lowercase by adding 32 to its ASCII value.
		- If the current character is a lowercase letter and is the first character of a word (preceded by a space or a tab), it is converted to uppercase.
		- After processing, the character is written to the standard output.
*/
void	str_capitalizer(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && 'z' >= str[i])
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}
