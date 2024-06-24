#include <stdlib.h>
#include <stdio.h>

int abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

/*
int *ft_rrange(int start, int end)
{
	int range = abs(end - start) + 1;
	int *arr = malloc(sizeof(int) * range);

	while (range--)
	{
		arr[range] = ((end >= start) ? start++ : start--);
	}
	return(arr);
}
*/
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
