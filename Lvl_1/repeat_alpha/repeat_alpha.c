#include <unistd.h>

int	ft_is_upper(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int	ft_is_lower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0, j = 0;
		while (av[1][i])
		{
			if (ft_is_upper(av[1][i]))
			{
				j = 0;
				while (j < av[1][i] - 64)
				{
					write (1, &av[1][i], 1);
					j++;
				}
			}
			if (ft_is_lower(av[1][i]))
			{
				j = 0;
				while (j < av[1][i] - 96)
				{
					write (1, &av[1][i], 1);
					j++;
				}
			}
			else
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
