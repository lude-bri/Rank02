#include <stdio.h>

/*
	ft_strpbrk

	This function searches the string `s1` for the first occurrence of any character from the string `s2`.
	It returns a pointer to the first character in `s1` that matches any character in `s2`.
	If no such character is found, it returns `NULL`.

	- We initialize two variables:
		- `i` to 0 to iterate through the string `s1`.
		- `j` to iterate through the string `s2` when comparing characters.
	
	- The outer loop runs while the current character in `s1[i]` is not null:
		- For each character in `s1`, we initialize `j` to 0 to start comparing it with the characters in `s2`.
		- The inner loop runs through each character of `s2`:
			- If the current character of `s1[i]` matches any character in `s2[j]`, return a pointer to `s1[i]`.
			- If no match is found, increment `j` to check the next character in `s2`.
		- If no character in `s2` matches `s1[i]`, increment `i` to move to the next character in `s1`.
	
	- If no character from `s2` is found in `s1`, return `NULL`.
*/
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return (s1);
			j++;
		}
		i++;
	}
	return (0);
}
