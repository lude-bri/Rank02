#include <unistd.h>

//ft_is_digit
int	ft_is_digit(char c)
{
	return ((c >= '0') && (c <= '9'));
}
//ft_is_space
int ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}
//ft_is_prime
int	ft_is_prime(int nbr)
{
	int check = 2;

	if (nbr <= 1)
		return (0);
	while (check < nbr)
	{
		if ((nbr % check) == 0)
			return (0);
		check++;
	}
	return (1);
}
//ft_atoi
int	ft_atoi(char *str)
{
	int i = 0, result = 0;

	while (str[i] && ft_is_space(str[i]))
		i++;
	while (ft_is_digit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}

//ft_putnbr
void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	write (1, &"0123456789"[nbr % 10], 1);
}


int main (int ac, char **av)
{
	if (ac == 2)
	{
		int result = 0; //resultado das somas;
		int nbr = ft_atoi(av[1]); //nosso numero;

		while (nbr > 0)
		{
			if (ft_is_prime(nbr))
				result += nbr;
			nbr--;
		}
		ft_putnbr(result);
	}
	else
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}

