#include <unistd.h>

int  ft_is_upper_til_M(char c);
int  ft_is_lower_til_m(char c);
int  ft_is_upper_til_Z(char c);
int  ft_is_lower_til_z(char c);

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (ft_is_lower_til_m(av[1][i]) || ft_is_upper_til_M(av[1][i]))
				av[1][i] += 13;
			else if (ft_is_lower_til_z(av[1][i]) || ft_is_upper_til_Z(av[1][i]))
				av[1][i] -= 13;
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

int  ft_is_upper_til_M(char c)
{
  return ((c >= 'A' && c <= 'M'));
}

int  ft_is_lower_til_m(char c)
{
  return ((c >= 'a' && c <= 'm'));
}

int  ft_is_upper_til_Z(char c)
{
  return ((c >= 'N' && c <= 'Z'));
}

int  ft_is_lower_til_z(char c)
{
  return ((c >= 'n' && c <= 'z'));
}
