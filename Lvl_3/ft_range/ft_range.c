#include <stdlib.h>
#include <stdio.h>

/*
	ft_range

	This function creates an array of integers, starting from `start` and ending at `end`.
	The array is dynamically allocated, and its size is based on the absolute difference between `start` and `end`.

	- We initialise three variables:
		- `arr` is a pointer to the dynamically allocated array that will hold the range of integers.
		- `range` is the absolute difference between `start` and `end`, which determines the size of the array.
		- `i` is used as an index to traverse and fill the array.
	
	- We allocate memory for `range` integers using `malloc`. The size of the allocation is `sizeof(int) * range`.

	- The main loop runs while `i` is less than `range`:
		- If `start` is less than `end`, we increment `start` and assign its value to `arr[i]`.
		- Otherwise, we decrement `start` and assign its value to `arr[i]`.

	- After the loop, the function returns the pointer to the array `arr`.

	- Note: The memory allocation and handling of the array could be improved by adding checks for the allocation and adjusting the range size when `start == end`.
*/
int abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

int	*ft_range(int start, int end)
{
	int *arr;
	int range;
	int i = 0;

	range = abs(end - start);
	arr = malloc(sizeof(int) * range);

	while (i < range)
	{
		if (start < end)
			arr[i] = start++;
		else (end > start)
			arr[i] = start--;
		i++;
	}
	return (arr);
}
