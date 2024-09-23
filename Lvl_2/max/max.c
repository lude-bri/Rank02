#include <stdio.h>

/*
	max

	This function returns the maximum value from an array of integers.

	- The function takes two arguments:
		- `tab`: A pointer to an array of integers.
		- `len`: The number of elements in the array.

	- We initialize two variables:
		- `i` to 0, which will be used to iterate through the array.
		- `max` to 0, which will store the maximum value found so far.

	- The loop runs while `i` is less than `len`:
		- If the current element (`tab[i]`) is greater than the current `max`, update `max` with `tab[i]`.
		- Increment `i` to move to the next element.
	
	- Once the loop has finished, return the value of `max`, which will hold the largest value in the array.

	- Note: `max` is initialized to 0, which may not work correctly for arrays that contain all negative numbers. You might want to set `max` to the first element of the array instead.
*/
int	max(int *tab, unsigned int len)
{
	int i = 0;
	int max = 0;

	while (i++ < len)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}

int main (void)
{
	int tab[] = {0, 1, 2, 42, 4, 5};

	int max_val = max(tab, 5);

	printf ("%d\n", max_val);
	return (0);
}

