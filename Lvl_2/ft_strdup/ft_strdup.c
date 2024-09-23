#include <stdlib.h>
#include <stdio.h>

/*
	ft_strdup

	This function allocates memory and duplicates the given string `src` into a newly allocated space in memory.

	- We initialize two variables:
		- `i` to 0, which will be used to copy the characters from `src`.
		- `len` to 0, which will store the length of the source string `src`.
	
	- First, we calculate the length of the string `src` by iterating through it until the null terminator.
		- The length is stored in `len`.
	
	- We then allocate memory for the duplicate string `dup`, using `malloc`. 
		- The size of memory allocated is the length of the string (`len`) plus 1 to account for the null terminator.
		- If `malloc` fails and returns `NULL`, the function returns `NULL` to indicate failure.
	
	- After memory allocation, we copy the characters from `src` to `dup` one by one, including the null terminator.
		- We use a loop to copy each character and increment `i` until all characters (and the null terminator) are copied.
	
	- Finally, we return the pointer to the newly duplicated string `dup`.
*/
char	*ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	char *dup;

	while (src[len])
		len++;
	dup = malloc(sizeof(char) * len + 1);
	if (!dup)
		return NULL;
	while (i <= len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int main (void)
{
	char s1[100] = "HEllo";
	char *s2 = ft_strdup(s1);

	printf("%s\n", s2);
	return (0);
}
