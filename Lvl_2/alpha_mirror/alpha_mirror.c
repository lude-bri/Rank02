/*
	alpha_mirror

	This program takes a string as an argument and applies the "Atbash cipher" to each alphabetic character.
	The Atbash cipher mirrors letters such that 'A' becomes 'Z', 'B' becomes 'Y', and so on. The same applies for lowercase letters.

	- We check if the number of arguments (`argc`) is 2, meaning the program is called with one argument.
	- If valid:
		- We initialize an index `i` to 0 to iterate through the string (`argv[1]`).
		- The loop runs while the current character in the string (`argv[1][i]`) is not null:
			- If the character is an uppercase letter (ASCII 65 to 90):
				- Apply the Atbash cipher by setting `argv[1][i]` to `90 - argv[1][i] + 65` (this mirrors the uppercase letter).
			- If the character is a lowercase letter (ASCII 97 to 122):
				- Apply the Atbash cipher by setting `argv[1][i]` to `122 - argv[1][i] + 97` (this mirrors the lowercase letter).
			- Write the transformed character to the standard output.
			- Increment `i` to move to the next character.
	- After all characters have been processed, print a newline (`'\n'`).
	- Finally, return `0` to indicate successful execution.
*/
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 90)
                argv[1][i] = 90 - argv[1][i] + 65;
            else if (argv[1][i] >= 97 && argv[1][i] <= 122)
                argv[1][i] = 122 - argv[1][i] + 97;
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return 0;
}
