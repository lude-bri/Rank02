#include <stdio.h>

/*
	ft_strrev

	This function reverses the given string `str` in place and returns the reversed string.

	- We initialize two variables:
		- `i` to 0, which will start from the beginning of the string.
		- `len` to 0, which will be used to store the length of the string and then adjusted to point to the last character.
		- `tmp` is a temporary variable used to swap characters.
	
	- First, we calculate the length of the string by iterating through it until the null terminator, and then decrement `len` by 1 to point to the last character.
	
	- Then, we use a loop to swap characters from the beginning (`i`) and the end (`len`) of the string:
		- We store the character at `str[i]` in `tmp`.
		- We assign the character at `str[len]` to `str[i]`.
		- We assign the value of `tmp` (original `str[i]`) to `str[len]`.
		- After swapping, decrement `len` and increment `i` to continue swapping until the entire string is reversed.
	
	- The loop stops when `i` is greater than or equal to `len`, indicating that the string has been fully reversed.
	- Finally, we return the pointer to the reversed string.
*/
char *ft_strrev(char *str)
{
	int i = 0, len = 0;
	char tmp;

	while (str[len])
		len++;
	--len;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len--;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "Hello, World";

	printf("%s\n", ft_strrev(str));
	return (0);
}
