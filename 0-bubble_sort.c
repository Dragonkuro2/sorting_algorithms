#include "sort.h"

/**
 * bubble_sort - this function sorts an array of integers in ascending
 *			order using the Bubble sort algorithm
 * @array: the input array that we'll sort
 * @size: the size of the array
 * Return: no return value
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}

}
