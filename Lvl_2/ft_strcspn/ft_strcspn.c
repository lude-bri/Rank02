#include <unistd.h>

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

size_t ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;
	int check;

	i = 0;
	while (s[i])
	{
		j = 0;
		check = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return (i);
		i++;
	}
	return (i);
}
