#include <unistd.h>

/*
	hidenp

	This program checks if the first string (`av[1]`) is a hidden subsequence of the second string (`av[2]`).
	A hidden subsequence means that the characters of the first string appear in the second string in the same order, but not necessarily consecutively.

	- We check if the number of arguments (`ac`) is 3, meaning the program is called with two strings.
	
	- If valid:
		- We initialize two variables:
			- `i` to 0, which is used to traverse the first string (`av[1]`).
			- `j` to 0, which is used to traverse the second string (`av[2]`).

		- The main loop runs while both `av[1][i]` and `av[2][j]` are not null:
			- If the characters at `av[1][i]` and `av[2][j]` match, we increment `i` to move to the next character in `av[1]`.
			- We always increment `j` to check the next character in `av[2]`, regardless of whether a match was found.

		- After the loop:
			- If `i` has reached the end of `av[1]` (i.e., `av[1][i] == '\0'`), it means all characters of `av[1]` were found in sequence in `av[2]`. We print `1`.
			- Otherwise, if the end of `av[1]` was not reached, we print `0`.
	
	- Finally, print a newline (`'\n'`) to conclude the output and return `0` to indicate successful execution.
*/
int main (int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;

		while (av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
