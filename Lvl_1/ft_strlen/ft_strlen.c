#include <stdio.h>

/*
	ft_strlen

	This function takes a string as an argument and returns the length of the string,
	i.e., the number of characters before the null terminator.

	- We initialize an index `i` to 0 to count the characters in the string.
	- While the current character in the string is not null (meaning we haven't reached the end):
		- Increment `i` to count each character.
	- Once we've reached the null terminator, return the value of `i`, which now holds the length of the string.
*/
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
