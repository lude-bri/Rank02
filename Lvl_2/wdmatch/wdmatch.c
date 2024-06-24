#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        const char *s1 = av[1];
        const char *s2 = av[2];
        int len = 0, i = 0;
        
        while (s1[len])
            len++;
        while (i < len && *s2)
        {
            if (s1[i] == *s2++)
                i++;
        }
        if (i == len)
            write(1, s1, len);
    }
    write(1, "\n", 1);
    return (0);
}

int main (int ac, char **av)
{
	//write a program that take 2 str
	//check whether its possible to write the str1 with str2 char
	//IN ORDER
	//IF ITS POSSIBLE, WRITE STR1
	//IF NOT POSSIBLE, WRITE /N


	if (ac == 3)
	{
		const char *str1 = av[1];
		const char *str2 = av[2];

		int i = 0; len = 0;

		//andar ate o fim da str
		while (str1[len])
			len++;
		//enquanto a str2 nao for nula, vamos verificar
		while (i < len && *str2)
		{
			//se forem iguais, andamos com o ponteiro e com o index
			if (s1[i] == *str2++)
				i++;
		}
		//ao chegar ao final, verificamos. SE INDEX FOR IGUAL AO LEN, SIGNIFICA QUE ENCONTROU TUDO.
		if (i == len)
			write (1, str1, len);
	}
	write (1, "\n", 1);
	return (0);
}
