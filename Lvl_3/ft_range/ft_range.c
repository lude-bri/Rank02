#include <stdlib.h>
#include <stdio.h>

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

//OR
/*
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
*/
