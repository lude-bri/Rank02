#include <stdlib.h>
#include <stdio.h>

/*
	ft_rrange

	This function creates an array of integers that contains all values from `start` to `end`, but in reverse order.
	It dynamically allocates memory for the array, fills it with integers, and returns a pointer to the array.

	- We initialize two variables:
		- `range` as the absolute difference between `start` and `end`, plus 1 to include both `start` and `end` in the array.
		- `arr` as a pointer to the dynamically allocated array, which has memory size equal to `sizeof(int) * range`.

	- The loop runs from the end of the array to the beginning (decrementing `range`), filling the array with values from `start` to `end`:
		- If `end` is greater than `start`, the array is filled in reverse order by incrementing `start`.
		- If `start` is greater than `end`, the array is filled in reverse order by decrementing `start`.

	- After the loop completes, the function returns the pointer to the array `arr`.

	- Note: This function does not handle memory allocation failure, which would require a check to ensure `malloc` successfully allocates memory.
*/
int abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

int *ft_rrange(int start, int end)
{
	int range = abs(end - start) + 1;
	int *arr = malloc (sizeof(int) * range);

	while (range--)
	{
		arr[range] = ((end > start) ? start++ : start--);
	}
	return (arr);
}

/*
int main() 
{
	int numb_range;
    int i;
    int start;
    int end;
    int *numbers;

    i = 0;
    start = 1;
    end = 10;
    if (end > start)
        numb_range = end - start;
    else
        numb_range = start - end;
    // numbers = (int *)malloc(sizeof(int) * numb_range);
    numbers = ft_rrange(start, end);
    while (i <= numb_range)
        printf("[%d] ", numbers[i++]);
	return 0;
}
*/
