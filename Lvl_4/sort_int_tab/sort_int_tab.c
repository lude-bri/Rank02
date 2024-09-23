#include <stdio.h>

/*
	sort_int_tab

	This function sorts an array of integers in ascending order using a simple sorting algorithm (similar to Bubble Sort).

	- Parameters:
		- `tab`: A pointer to the array of integers to be sorted.
		- `size`: The number of elements in the array.
	
	- The function uses a `while` loop to traverse the array and compare adjacent elements.
		- If an element is greater than the next one, the two elements are swapped.
		- After a swap, the index `i` is reset to 0 to restart the process, ensuring that the smallest elements "bubble" to the front.
		- If no swap is needed, `i` is incremented, moving to the next pair of elements.
		- The loop continues until the entire array is sorted.
*/
void	sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int tmp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

void print_arr(int *arr, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", arr[i++]);
		if (i < n)
			printf(", ");
	}
	printf("\n");
}

int main(void)
{
	int n = 9;
	int arr[9] = { 3, 7, 2, 4, 1, 3, 9, 0 , 7 };

	n = 9;
	printf("Unnordered List\n");
	print_arr(arr, n);


	printf("Ordered List\n");
	sort_int_tab(arr, n);
	print_arr(arr, n);
}

