/*
	do_op

	This program performs basic arithmetic operations (addition, subtraction, multiplication, division, and modulus) 
	on two integers based on the operator provided as the second argument. The program expects exactly three arguments:
	- The first and third arguments are the two numbers (as strings).
	- The second argument is the operator (as a string with a single character: '+', '-', '*', '/', or '%').

	- We check if the number of arguments (`argc`) is 4, meaning the program is called with two numbers and one operator.
	- If valid:
		- We initialize an index `i` to 0 to iterate through the operator string (`argv[2]`).
		- The loop runs while the current character in the operator string (`argv[2][i]`) is not null:
			- Depending on the character:
				- If the character is '+', add the two numbers (convert them to integers using `atoi`).
				- If the character is '-', subtract the second number from the first.
				- If the character is '*', multiply the two numbers.
				- If the character is '/', divide the first number by the second.
				- If the character is '%', compute the modulus of the first number divided by the second.
			- Print the result of the operation using `printf`.
			- Increment `i` to move to the next character (though in this case the operator string should be only one character).
	- After processing the operator, print a newline (`'\n'`).
	- Finally, return `0` to indicate successful execution.
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc == 4)
    {
        int i = 0;
        while (argv[2][i])
        {
            if (argv[2][i] == '+')
                printf ("%d", atoi(argv[1]) + atoi(argv[3]));
            else if (argv[2][i] == '-')
                printf ("%d", atoi(argv[1]) - atoi(argv[3]));
            else if (argv[2][i] == '*')
                printf ("%d", atoi(argv[1]) * atoi(argv[3]));
            else if (argv[2][i] == '/')
                printf ("%d", atoi(argv[1]) / atoi(argv[3]));
            else if (argv[2][i] == '%')
                printf ("%d", atoi(argv[1]) % atoi(argv[3]));
            i++;
        }
    }
    printf("\n");
    return 0;
}
