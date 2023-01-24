#include "sort.h"

/**
 * selection_sort - sorting an array of integers using selection sort algo
 * @array: the array of integers
 * @size: the size of the array
 *
 * Return: none
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, min_num;

	temp = 0, min_num = 0;
	for (i = 0; i < size - 1; i++)
	{
		min_num = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_num])
			{
				min_num = j;
			}
		}
		if (min_num != i)
		{
			temp = array[min_num];
			array[min_num] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
