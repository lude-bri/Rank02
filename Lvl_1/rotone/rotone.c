#include <unistd.h>

int ft_is_upper(char c)
{
	return ((c >= 'A') && (c <= 'Y'));
}
int ft_is_lower(char c)
{
	return ((c >= 'a') && (c <= 'y'));
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (av[1][i] == 'z' || av[1][i] == 'Z')
				av[1][i] -= 25;
			else if (ft_is_upper(av[1][i]) || ft_is_lower(av[1][i]))
				av[1][i] += 1;
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
