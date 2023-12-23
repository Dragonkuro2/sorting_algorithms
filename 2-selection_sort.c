#include "sort.h"

/**
 * selection_sort - this function sort the array using selection method.
 * @array: the input array that we want to sort.
 * @size: the size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int min_idx, tmp;
	size_t i, j, k;

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i; j < size; j++)
		{
			if (array[min_idx] > array[j])
				min_idx = j;
		}
		if (array[min_idx] != array[i])
		{
			tmp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = tmp;

			for (k = 0; k < size; k++)
			{
				if (k < size - 1)
					printf("%d, ", array[k]);
				else
					printf("%d", array[k]);
			}
			printf("\n");
		}
	}
}
