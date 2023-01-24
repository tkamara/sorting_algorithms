#include "sort.h"

/**
 * divide - implements the division of array about the pivot
 * @array: the array of integers
 * @low: starting index
 * @high: ending index
 * @size: size of array
 *
 * Return: correct position of pivot
 */

int divide(int *array, int low, int high, size_t size)
{
	int pivot, temp, i, j;

	temp = 0;
	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] != array[high])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_sort_arr - using recursion to implement algorithm
 * @array: the array of integers
 * @low: starting index
 * @high: ending index
 * @size: the size of array
 *
 * Return: none
 */

void quick_sort_arr(int *array, int low, int high, size_t size)
{
	int div;

	if (low < high)
	{
		div = divide(array, low, high, size);
		quick_sort_arr(array, low, (div - 1), size);
		quick_sort_arr(array, (div + 1), high, size);
	}
}

/**
 * quick_sort - sorting an array using quick sort algorithm
 * @array: the array of integers
 * @size: size of array
 *
 * Return: none
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}

	quick_sort_arr(array, 0, (size - 1), size);
}
