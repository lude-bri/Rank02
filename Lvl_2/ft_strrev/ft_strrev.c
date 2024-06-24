#include <stdio.h>

char *ft_strrev(char *str)
{
	int i = 0, len = 0;
	char tmp;

	while (str[len])
		len++;
	--len;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len--;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "Hello, World";
	char *str = "Hello, World";

	printf("%s\n", ft_strrev(str));
	return (0);
}
