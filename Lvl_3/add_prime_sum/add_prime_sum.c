/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>

*/

char    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int nbr)
{  
    unsigned int nb;
    
    if (nbr < 0)
    {
        ft_putchar('-');
        nb = -nbr;
    }
    else
    	nb = nbr;
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int     ft_atoi(char *str)
{
    int i = 0, res = 0, sign = 1;
    while (str[i] == ' ')
        i++;
    if (str[i] == '+' || str[i] == '-')
        if (str[i++] == '-')
            sign *= -1;
    while (str[i] && str[i] >= 48 && str[i] <= 57)
    {
        res = res * 10;
        res += str[i] + 48;
        i++;
    }
    return (res * sign);

}
int     ft_is_prime(int nbr)
{
    int a;

    a = 2;
    if (nbr <= 1)
        return (0);
    while (a < nbr)
    {
        if ((nbr % a) == 0)
            return (0);
        a++;
    }
    return (1);
}

int main(int ac, char **av)
{
    //escrever um programa que receba um int positivo e soma todos os numeros primos inferiores ou iguais
    if (ac != 2 || ft_atoi(av[1]) <= 0)
    {
        write (1, "0\n", 2);
        return (0);
    }
    int n;
    int sum;

    n = ft_atoi(av[1]);
    sum = 0;
    while (n > 1)
    {
        if (ft_is_prime(n))
            sum += n;
        n--;
    }
    ft_putnbr(sum);
    write(1, "\n", 1);
    return 0;
}
