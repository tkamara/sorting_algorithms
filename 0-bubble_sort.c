#include "sort.h"

/**
 * bubble_sort - sort array of integers using bubble sort algo
 * @array: the array
 * @size: the size of array
 *
 * Return: none
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size == 0)
	{
		return;
	}
	temp = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
