#include <unistd.h>

int ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int ft_atoi(char *str)
{
	int i = 0, result = 0;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);

}

void	print_hex(int nbr)
{
	if (nbr >= 16)
		print_hex(nbr / 16);
	write (1, &"0123456789abcdef"[nbr % 16], 1);
}

int main (int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write (1, "\n", 1);
	return (0);
}
