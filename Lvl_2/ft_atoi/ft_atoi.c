#include <stdio.h>

int	ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int ft_atoi(const char *str)
{
	int i = 0, sign = 1, res = 0;

	while (str[i] && ft_is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int main (void)
{
	char str[] = "01234";

	printf("%d\n", ft_atoi(str));
	return (0);
}
