/*
	camel_to_snake

	This program takes a string as an argument and converts any uppercase letters to lowercase.
	Each uppercase letter is preceded by an underscore ('_') when printed.
	Lowercase letters and non-alphabetic characters are printed as they are.

	- We check if the number of arguments (`argc`) is 2, meaning the program is called with one argument.
	- If valid:
		- We initialize an index `i` to 0 to iterate through the string (`argv[1]`).
		- The loop runs while the current character in the string (`argv[1][i]`) is not null:
			- If the character is an uppercase letter ('A' to 'Z'):
				- First, write an underscore ('_') to the standard output.
				- Convert the uppercase letter to lowercase by adding 32 to its ASCII value.
			- Write the current (or modified) character to the standard output.
			- Increment `i` to move to the next character.
	- After all characters have been processed, print a newline (`'\n'`).
	- Finally, return `0` to indicate successful execution.
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                write (1, "_", 1);
                argv[1][i] += 32;
            }
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return 0;
}
