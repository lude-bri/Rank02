#include <unistd.h>

int ft_is_space(char c)
{
	return ((c == ' ') || (c >= '\t' && c <= '\r'));
}

int main (int ac, char **av)
{
	if (ac == 2 && av[1])
	{
		int i = 0;
		int space = 0;

		while (av[1][i] && ft_is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			while (!ft_is_space(av[1][i]) && av[1][i])
				write (1, &av[1][i++], 1);
			while (ft_is_space(av[1][i]) && av[1][i])
			{
				space = 1;
				i++;
			}
			if (space)
				write (1, " ", 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
