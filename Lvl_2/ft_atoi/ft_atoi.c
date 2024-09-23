/*
	ft_atoi

	This function converts a string to an integer, similar to the standard library function `atoi`.

	- We initialize three variables:
		- `i` is used to iterate through the string.
		- `s` is a sign variable initialized to 1 (positive) and will be set to -1 if a negative sign is encountered.
		- `result` is used to store the integer value being calculated.
	
	- First, we skip any leading whitespace characters (spaces and certain control characters like tabs and newlines).
		- We increment `i` while the current character is a space or a control character (ASCII values between '\t' and '\r').
	
	- Then, we check for a sign:
		- If the character is a minus sign (`-`), we multiply `s` by -1 to make the result negative.
		- If the character is a plus sign (`+`), we simply move to the next character.

	- We then convert the string's digits to an integer:
		- As long as the current character is a valid digit (between '0' and '9'), we multiply `result` by 10 to shift its value left by one decimal place.
		- We then add the value of the current digit (`str[i] - '0'`) to `result`.
		- Finally, we increment `i` to move to the next character.
	
	- After processing all digits, we return the result multiplied by `s` to account for any negative sign.
*/

#include <unistd.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int s = 1;
    int result = 0;

    while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    if (str[i] == '-')
    {   
        s *= -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] && (str[i] >= 0 && str[i] <= 9))
    {
        result *= 10;
        result += str[i] + 48;
        i++;
    }
    return (result * s);
}

