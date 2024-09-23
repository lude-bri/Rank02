#include <stdio.h>
#include <string.h>

/*
	ft_strcmp

	This function compares two strings (`s1` and `s2`) character by character.

	- We initialize an index `i` to 0 to track the position in both strings.
	- The loop runs while both `s1[i]` and `s2[i]` are not null, and the characters at the current position are equal.
		- If the characters are equal, increment `i` to move to the next position in both strings.
	- Once the loop exits (either because characters differ or the end of one string is reached), the function returns the difference between `s1[i]` and `s2[i]`.
		- This difference will be zero if the strings are identical.
		- A positive value means `s1` is greater than `s2` (in lexicographical order).
		- A negative value means `s1` is less than `s2`.
*/
int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

