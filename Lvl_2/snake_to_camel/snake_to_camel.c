#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*
	snake_to_camel

	This program takes a string as an argument and converts "snake_case" to "camelCase" format.
	- It removes underscores (`_`) and converts the letter immediately following each underscore to uppercase.
	- Other characters are printed as they are.

	- We check if the number of arguments (`ac`) is 2, meaning the program is called with one argument.
	
	- If valid:
		- We initialize an index `i` to 0 to iterate through the string (`av[1]`).
		
		- The loop runs while `av[1][i]` is not null:
			- If the current character is an underscore (`_`):
				- Increment `i` to move to the next character (which will be converted to uppercase).
				- Convert the character following the underscore to uppercase by subtracting 32 from its ASCII value (converting lowercase letters to uppercase).
			- Write the current character to the standard output using `write`.
			- Increment `i` to move to the next character in the string.
		
	- After processing all characters, print a newline (`'\n'`).
	- Finally, return `0` to indicate successful execution.
*/
int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (av[1][i] == '_')
			{
				++i;
				av[1][i] -= 32;
			}
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
