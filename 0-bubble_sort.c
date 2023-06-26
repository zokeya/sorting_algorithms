#include "sort.h"

/**
 * swap_ints - Interchanges two integers in an array
 * @a: The first integer to swap
 * @b: The second integer to swap
*/
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order
 * @array: An array of integers to be sorted
 * @size: The size of array
 *
 * Description: Prints the array after each swap
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	unsigned int j;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (j = 0; j < len - 1; j++)
		{
			for (i = 0; i < len - j - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					swap_ints(array + i, array + i + 1);
					print_array(array, size);
					bubbly = false;
				}
			}
		}len--;
	}
}
