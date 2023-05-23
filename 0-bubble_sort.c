#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The initial integer to swap.
 * @b: The following integer to swap.
 * F A R O U Q
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Arrange an array of integers in rising order.
 * @array: An array of integers to arrange.
 * @size: The size of the array.
 *
 * Description: Prints the array after each exchange.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
