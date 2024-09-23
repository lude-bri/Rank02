#include <unistd.h>

/*
	inter

	This function takes two strings `str1` and `str2` and prints the characters that appear in both strings exactly once, in the order they appear in `str1`.
	It ensures that duplicate characters are printed only once.

	- We initialize two variables:
		- `i` to 0 to iterate through `str1`.
		- `j` to iterate through `str2` for each character in `str1`.
	- We also declare an array `ascii[256]` and initialize it to 0. This array is used to track which characters have already been printed.
		- The array index represents the ASCII value of the characters. When a character is printed, we set `ascii[(int)str1[i]]` to 1 to avoid printing it again.
	
	- The outer loop iterates through each character of `str1`.
		- For each character in `str1[i]`, we reset `j` to 0 and compare it with each character in `str2[j]` using the inner loop.
		- If `str1[i]` is equal to `str2[j]` and it has not been printed yet (`ascii[(int)str1[i]] == 0`):
			- Mark `ascii[(int)str1[i]]` as 1 to indicate the character has been printed.
			- Write the character to the standard output using `write(1, &str1[i], 1)`.
		- The inner loop increments `j` to compare the next character in `str2`.
		- The outer loop increments `i` to move to the next character in `str1`.
	
	- The function ends without returning anything since its purpose is to print the result.
*/
void	inter(char *str1, char *str2)
{
	int i = 0, j;
	int ascii[256] = {0};

	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if ((str1[i] == str2[j]) && (ascii[(int)str1[i]] == 0))
			{
				ascii[(int)str1[i]] = 1;
				write (1, &str1[i], 1);
			}
			j++;
		}
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
