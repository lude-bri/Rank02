#include <stdio.h>

//ft_is_valid
int ft_is_valid (int ch, int baselen)
{
	int i = 0;
	char *lower_base = "0123456789abcdef";
	char *upper_base = "0123456789ABCDEF";

	while (i < baselen)
	{
		if ((ch == lower_base[i]) || (ch == upper_base[i]))
			return (1);
		i++;
	}
	return (0);
}

//ft_is_space
int ft_is_space(char c)
{
	return ((c == ' ') || (c >= '\t' && c <= '\r'));
}

int ft_is_digit(char c)
{
	return ((c >= '0' && c <= '9'));
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0, sign = 1, result = 0;

	while (str[i] && ft_is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_is_valid(str[i], str_base))
	{
		result *= str_base;
		if (ft_is_digit(str[i]))
			result += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			result += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			result += str[i] - 'A' + 10;
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>
//#include "ft_atoi_base.c"
// #include "ft_atoi_base2.c"

int main(int ac, char **av)
{
	int num, base;

	(void) ac;
	if (ac != 3)
		return (1);
	printf("STRING : %s\n", av[1]);
	base = atoi(av[2]);
	num = ft_atoi_base(av[1], base);
	printf("ATOI_BASE: %d\n", num);
	return (0);
}






































