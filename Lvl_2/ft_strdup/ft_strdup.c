#include <stdlib.h>
#include <stdio.h>

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
