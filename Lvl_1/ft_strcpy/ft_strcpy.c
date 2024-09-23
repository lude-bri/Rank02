#include <stdio.h>

/*
	ft_strcpy

	This function copies the content of the source string (s2) to the destination string (s1),
	and returns the destination string.

	- We initialize an index `i` to 0 to track our position in both strings.
	- While the current character of the source string (s2) is not null:
		- Copy the character from the source string (s2) to the destination string (s1);
		- Move to the next character by incrementing `i`.
	- Once we've reached the end of the source string (s2), we add a null-terminating character 
	  to the destination string (s1) to properly terminate it.
	- Finally, return the destination string (s1).
*/
char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main (void)
{
	char str1[] = "Hello";
	char str2[] = "World";

	printf("%s\n", ft_strcpy(str1, str2));
	return (0);
}
