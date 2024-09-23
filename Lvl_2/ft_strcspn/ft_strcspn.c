#include <unistd.h>

/*
	ft_strcspn

	This function calculates the length of the initial segment of the string `s` that does not contain any characters from the string `reject`.
	It returns the number of characters in `s` before encountering any character from `reject`.

	- We initialize two variables:
		- `len` to 0, which will track the length of the initial segment of `s` that doesn't contain any characters from `reject`.
		- `i` to be used for iterating through the `reject` string.
	
	- The outer loop runs while the current character in `s[len]` is not null:
		- For each character in `s`, we initialize `i` to 0 to start comparing it with the characters in `reject`.
		- The inner loop runs through each character of `reject`:
			- If the current character of `s[len]` matches any character in `reject[i]`, return the current value of `len` because this is where the match occurs.
			- If no match is found in `reject`, increment `i` to check the next character in `reject`.
		- If no character in `reject` matches `s[len]`, increment `len` to move to the next character in `s`.
	
	- If no character from `reject` is found in `s`, return the total length of the string `s` (i.e., the value of `len` when the loop finishes).
*/
size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int len = 0;

	while(s[len])
	{
		i = 0;
		while (reject[i])
		{
			if (s[len] == reject[i])
				return (len);
			i++;
		}
		len++;
	}
	return (len);
}
