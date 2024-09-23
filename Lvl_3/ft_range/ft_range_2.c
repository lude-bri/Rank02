#include <stdio.h>

/*
	ft_range

	This version of `ft_range` creates an array of integers that starts from `start` and ends at `end`.
	The function dynamically allocates memory for the array and fills it with integers in increasing or decreasing order, based on the values of `start` and `end`.

	- We initialize:
		- `range` as the absolute difference between `start` and `end`.
		- `arr` as a pointer to the dynamically allocated array with memory size equal to `sizeof(int) * range`.
		- `i` as an index used to traverse and fill the array.

	- The loop runs while `i` is less than `range`:
		- Each iteration, we use the ternary operator to either increment or decrement `start` and assign its value to `arr[i]`.

	- After the loop, we assign the final value of `start` to `arr[i]` to ensure the last value is included.

	- The function returns the pointer to the array `arr`.
*/
int  abs(int nbr)
{
  return ((nbr < 0) ? -nbr : nbr);
}

int	*ft_range(int start, int end)
{
	int range = abs(end - start);
	int *arr = malloc(sizeof(int) * range);
	int i = 0;

	while (i < range)
	{
		arr[i++] = ((end > start) ? start++ : start--);
	}
	arr[i] = start;
	return (arr);
}
