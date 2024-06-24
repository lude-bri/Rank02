#include <stdio.h>

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

