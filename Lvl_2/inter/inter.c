#include <unistd.h>

void	inter(char *str1, char *str2)
{
	int i = 0, j;
	int ascii[256] = {0};

	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if ((str1[i] == str2[j]) && (ascii[(int)str1[i]] == 0))
			{
				ascii[(int)str1[i]] = 1;
				write (1, &str1[i], 1);
			}
			j++;
		}
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}

void	wd_match(char *str1, char *str2)
{
	int i = 0;
	int j = 0;

	while (str2[i])
	{
		if (str1[i] == str2[j])
			i++;
		j++;
	}
	if (i == ft_strlen(str1))
		ft_putstr(str1);
}

