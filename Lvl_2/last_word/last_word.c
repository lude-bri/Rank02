#include <stdio.h>
#include <unistd.h>

int ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int word_end;
		int word_start;

		while (av[1][i])
			i++;
		--i;
		while (ft_is_space(av[1][i]))
			--i;
		word_end = i;
		while (av[1][i] && !ft_is_space(av[1][i]))
			--i;
		word_start = (i + 1);
		while (word_start <= word_end)
		{
			write (1, &av[1][word_start], 1);
			word_start++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
