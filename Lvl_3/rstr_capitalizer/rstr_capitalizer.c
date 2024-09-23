
#include <unistd.h>
#include <unistd.h>

/*
	r_capitalizer

	This function takes a string and converts the last letter of each word to uppercase, while converting all other letters to lowercase.
	A word is defined as a sequence of non-space characters.

	- We initialize `i` to 0 to iterate through the string `s`.
	
	- The loop processes each character in the string:
		- If the character is an uppercase letter, it is converted to lowercase by adding 32 to its ASCII value.
		- If a lowercase letter is followed by a space or null character (end of word), it is converted to uppercase by subtracting 32 from its ASCII value.
		- After processing, each character is printed using `ft_putchar`.

	- This ensures that the last letter of every word in the string is capitalized, while all other letters are in lowercase.
*/
int ft_isspace(char c)
{
    if (c <= 32)
        return (1);
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void r_capitalizer(char *s)
{
    int i = 0;
    while (s[i])
    {
         // If the character is uppercase, make it lowercase
         if (s[i] >= 'A' && s[i] <= 'Z')
             s[i] += 32;
         // Now check for lowercase character and if the next char
         // is a space character, make it uppercase again
         if ((s[i] >= 'a' && s[i] <= 'z') && ft_isspace(s[i + 1]))
             s[i] -= 32;
         // Now print every char
         ft_putchar(s[i++]);
    }
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
        ft_putchar('\n');
    else
    {
        // Loop over all params starting at 1 (we don't want the name of
        // the executable to be written to the screen)
        while (i < ac)
        {
            r_capitalizer(av[i]);
            ft_putchar('\n');
            i++;
        } 
    }
}
