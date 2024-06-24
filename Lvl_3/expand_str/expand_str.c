#include <unistd.h>

int ft_is_space(char c)
{
	return ((c == ' ') || (c >= '\t' && c <= '\r'));
}

int main (int ac, char **av)
{
	int i = 0, space = 0;

	if (ac == 2 && av[1][i])
	{
		while (ft_is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (ft_is_space(av[1][i]))
				space = 1;
			if (!ft_is_space(av[1][i]))
			{
				if (space == 1)
					write (1, "   ", 3);
				space = 0;
				write (1, &av[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}


