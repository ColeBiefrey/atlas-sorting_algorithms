#include "sort.h"

/**
 * selection_sort - sorts array of ints in
 * ascending order using Selection sort
 * algorithm
 * @array: input array ints
 * @size: size of array
 * Return: no return
 */

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, m;

	for (i = 0; i < size; i++)
	{
		m = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[m] > array[j])
				m = j;
		}

		if (i != m)
		{
			tmp = array[i];
			array[i] = array[m];
			array[m] = tmp;
			print_array(array, size);
		}
	}
}
