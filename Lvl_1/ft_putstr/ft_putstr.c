#include <unistd.h>

/*
	ft_putstr

	This function takes a string as an argument and prints it to the standard output.

	- We initialize an index `i` to 0 to track our position in the string.
	- While the current character in the string is not null (meaning we haven't reached the end of the string):
		- Write the character to the standard output;
		- Move to the next character by incrementing `i`.
*/
void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write (1, &str[i++], 1);
}
