#include "sort.h"

/**
 * bubble_sort - function that sorts array
 * of ints in ascending order using Bubble
 * sort algorithm
 * @array: input arrray
 * @size: size of  array
 * Return: no return
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int tmp, swap;

	for (n = size, swap = 1; n > 0 && swap; n--)
	{
		swap = 0;
		for (i = 0; (i + 1) < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
