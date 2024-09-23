#include <stdio.h>

/*
	ft_strchr

	This function searches for the first occurrence of the character `c` in the string `str`.
	It returns a pointer to the first occurrence of the character `c` in the string `str`.
	If the character is not found, it returns `NULL`.

	- We initialize an index `i` to 0 to iterate through the string `str`.
	- The loop runs while `str[i]` is not null:
		- If the character at `str[i]` matches `c`, return a pointer to `str[i]`.
		- If no match is found, increment `i` to check the next character.
	- If the loop completes and no match is found, return `NULL`.
*/
char *ft_strchr(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (str);
		i++;
	}
	return (0);
}

/*
	ft_strspn

	This function calculates the length of the initial segment of `s` that consists only of characters in the string `accept`.
	It returns the number of characters in `s` that consist solely of characters from `accept`.

	- We initialize `len` to 0 to keep track of the length of the initial segment of `s` that matches `accept`.
	
	- The loop runs while `s[len]` is not null:
		- Use `ft_strchr` to check if `s[len]` is in `accept`. If it is not (i.e., `ft_strchr` returns `NULL`), break out of the loop.
		- If `s[len]` is found in `accept`, increment `len` to move to the next character.
	
	- When a character that is not in `accept` is found, or the end of the string `s` is reached, return the value of `len`, which represents the number of matching characters.
*/
size_t ft_strspn(const char *s, const char *accept)
{
	int len = 0;

	while (s[len])
	{
		if (ft_strchr(accept, s[len]) == 0)
			break;
		len++;
	}
	return (len);
}

