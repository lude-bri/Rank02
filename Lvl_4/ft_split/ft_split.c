#include <stdlib.h>

/*
	ft_split

	This function splits a string `str` into an array of words, using spaces and tabs as delimiters.

	- We first loop through the string to count how many words are present. A word is a sequence of non-space characters.
	- Then we allocate memory for an array of strings, with each string representing a word.
	- We go through the string again, extracting each word and copying it into the allocated array using `ft_strncpy`.
	
	- The function returns the array of strings, with the last element being `NULL` to mark the end of the array.
*/
char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int w = 0;

	while (str[i])
	{
		while (str[i] && ft_is_space(str[i]))
			i++;
		if (str[i])
			w++;
		while (str[i] && !ft_is_space(str[i]))
			i++;
	}

	char **split = (char **)malloc(sizeof(char *) * (w + 1));

	i = 0;
	while (str[i])
	{
		while (str[i] && ft_is_space(str[i]))
			i++;
		j = i;
		while (str[i] && !ft_is_space(str[i]))
			i++;
		if (i > j)
		{
			split[k] = malloc(sizeof(char) * (i - j) + 1);
			ft_strncpy(split[k++], &str[j], i - j);
		}
		split[k] = NULL;
	}
	return (split);
}

char ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
