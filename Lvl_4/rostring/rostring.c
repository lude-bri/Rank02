#include <unistd.h>

int ft_isspace(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int main (int ac, char **av)
{
	char *str;
	int word_start;
	int word_end;
	int space_found;
	int c;

	if (ac >= 2)
	{
		str = av[1];
		c = 0;
		while (ft_isspace(str[c]))
			c++;
		word_start = c;
		while (str[c] && !ft_isspace(str[c]))
			c++;
		word_end = c;
		while (ft_isspace(str[c]))
			c++;
		while (str[c])
		{
			while (ft_isspace(str[c]) && ft_isspace(str[c + 1]))
				c++;
			if (ft_isspace(str[c]))
				space_found = 1;
			write (1, &str[c++], 1);
		}
		if (space_found)
			write (1, " ", 1);
		while (word_start < word_end)
			write (1, &str[word_start++], 1);
	}
	write (1, "\n", 1);
	return (0);
}
