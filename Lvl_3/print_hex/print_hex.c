#include <unistd.h>

/*
	print_hex

	This program converts an integer passed as a command-line argument into its hexadecimal representation 
	and prints it. If no argument or more than one argument is provided, it only prints a newline.

	- The function `ft_is_space` checks if a character is a whitespace or tab character, used to skip leading spaces in `ft_atoi`.

	- The function `ft_atoi` converts a string of digits into an integer:
		- It skips any leading spaces using `ft_is_space`.
		- Then, it processes each digit character, converting it to an integer by accumulating the result.
	
	- The function `print_hex` converts an integer `nbr` into its hexadecimal representation:
		- It uses recursion to handle multi-digit numbers.
		- The function calls itself with `nbr / 16` to recursively process all higher-order digits.
		- It then prints the current hexadecimal digit using `nbr % 16` to find the remainder, which is used as an index in the string `"0123456789abcdef"`.

	- In the `main` function:
		- If exactly one argument is provided (`ac == 2`), the program converts the argument from string to integer using `ft_atoi` and prints it in hexadecimal using `print_hex`.
		- After printing the hexadecimal number, the program writes a newline (`'\n'`).

	- The program returns `0` to indicate successful execution.
*/
int ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int ft_atoi(char *str)
{
	int i = 0, result = 0;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);

}

void	print_hex(int nbr)
{
	if (nbr >= 16)
		print_hex(nbr / 16);
	write (1, &"0123456789abcdef"[nbr % 16], 1);
}

int main (int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write (1, "\n", 1);
	return (0);
}
