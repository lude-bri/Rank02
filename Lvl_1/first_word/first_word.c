#include <unistd.h>

/*
	first_word

	If the number of parameters is not 1, display a new line
		Being one, we set an index to see our string
		While our string is not null (it exists) AND it IS a SPACE;
			go ahead;
		At this point, we dont have spaces. While our string is not null and is NOT a space;
			write the content of our string, one by one;
			go ahead;


*/
int	ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i] && ft_is_space(av[1][i]))
			i++;
		while (av[1][i] && !ft_is_space(av[1][i]))
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

