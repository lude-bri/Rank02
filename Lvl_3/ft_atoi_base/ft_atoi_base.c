#include <stdlib.h>
#include <stdio.h>

/*
	ft_atoi_base

	This function converts a string `str` representing a number in a given base `str_base` into an integer.
	The function handles spaces, optional '+' and '-' signs, and supports bases up to hexadecimal (base 16).

	- We initialize three variables:
		- `i` to 0, which is used to iterate through the string.
		- `sign` to 1, which will hold the sign of the resulting number (positive or negative).
		- `result` to 0, which will accumulate the value of the converted number.
	
	- First, we skip any leading whitespace characters using `ft_is_space`, advancing `i` until the first non-space character is found.
	
	- Next, we handle any optional '+' or '-' signs:
		- If a '-' is encountered, the sign is set to negative by multiplying `sign` by -1.
		- The loop continues to skip additional signs (if any).

	- The main loop processes the number part of the string:
		- For each valid character in the base (checked using `ft_is_valid`), we multiply `result` by `str_base` to shift its value left by one place in the given base.
		- If the character is a digit (`ft_is_digit`), we add its numeric value by subtracting `'0'`.
		- If the character is a lowercase letter between 'a' and 'f', we add its corresponding value by subtracting `'a'` and adding 10.
		- If the character is an uppercase letter between 'A' and 'F', we add its corresponding value by subtracting `'A'` and adding 10.

	- Finally, after processing all valid characters, the function returns the `result` multiplied by `sign`, which accounts for any negative sign.

	- The function stops processing when it encounters a character that is not valid in the given base.
*/
int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0, sign = 1, result = 0;

	while (str[i] && ft_is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_is_valid(str[i], str_base))
	{
		result *= str_base;
		if (ft_is_digit(str[i]))
			result += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			result += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			result += str[i] - 'A' + 10;
		i++;
	}
	return (result * sign);
}

int ft_is_valid (int ch, int baselen)
{
	int i = 0;
	char *lower_base = "0123456789abcdef";
	char *upper_base = "0123456789ABCDEF";

	while (i < baselen)
	{
		if ((ch == lower_base[i]) || (ch == upper_base[i]))
			return (1);
		i++;
	}
	return (0);
}

int ft_is_space(char c)
{
	return ((c == ' ') || (c >= '\t' && c <= '\r'));
}

int ft_is_digit(char c)
{
	return ((c >= '0' && c <= '9'));
}

int main(int ac, char **av)
{
	int num, base;

	(void) ac;
	if (ac != 3)
		return (1);
	printf("STRING : %s\n", av[1]);
	base = atoi(av[2]);
	num = ft_atoi_base(av[1], base);
	printf("ATOI_BASE: %d\n", num);
	return (0);
}
