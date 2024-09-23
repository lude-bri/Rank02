#include <unistd.h>

/*
	wd_match

	This program checks if the first string `s1` is a subsequence of the second string `s2`.
	If all the characters of `s1` appear in `s2` in the same order, but not necessarily consecutively, the program prints `s1`.
	If `s1` is not a subsequence of `s2`, nothing is printed.

	- We check if the number of arguments (`ac`) is 3, meaning the program is called with two strings.
	
	- If valid:
		- We declare two pointers `s1` and `s2` pointing to the first and second input strings, respectively.
		- We also declare `len` to store the length of `s1` and `i` to track the matching position in `s1`.
		
		- First, we calculate the length of `s1` using a loop and store it in `len`.
		
		- Next, we iterate over `s1` and `s2`:
			- If the current character of `s1` matches the current character of `s2` (pointed to by `*s2`), increment `i` to move to the next character in `s1`.
			- In either case, `s2` is incremented to continue checking the rest of the second string.
			- This loop continues until either all characters of `s1` are matched, or `s2` is exhausted.
		
		- After the loop:
			- If `i` equals `len`, it means all characters of `s1` have been matched in sequence with `s2`, and we print `s1`.
	
	- Finally, print a newline (`'\n'`).
	- Return `0` to indicate successful execution.
*/
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
