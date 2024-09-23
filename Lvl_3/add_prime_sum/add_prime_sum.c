#include <unistd.h>

/*
	add_prime_sum

	This program takes an integer as an argument and calculates the sum of all prime numbers less than or equal to that integer.
	If no argument is provided, the program prints `0`.

	- We check if the number of arguments (`ac`) is 2, meaning the program is called with one number as input.
	
	- If valid:
		- We initialize `result` to 0, which will store the sum of prime numbers.
		- We convert the input string `av[1]` to an integer using `ft_atoi` and store it in `nbr`.
		
		- The loop runs while `nbr` is greater than 0:
			- If the current number `nbr` is prime (checked using `ft_is_prime`), add it to `result`.
			- Decrement `nbr` to check the next number.
		
		- After the loop completes, the sum of all prime numbers less than or equal to the input is stored in `result`.
		- We print `result` using `ft_putnbr`.
	
	- If the number of arguments is not 2, the program prints `0`.
	
	- Finally, print a newline (`'\n'`) and return `0` to indicate successful execution.
*/
int main (int ac, char **av)
{
	if (ac == 2)
	{
		int result = 0;
		int nbr = ft_atoi(av[1]);

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
