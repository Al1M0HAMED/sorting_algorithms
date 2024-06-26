#include "sort.h"
/**
 * bubble_sort - this function sorts and array in bubble sort algorithm.
 * @array: is the array we need to sort.
 * @size: is the size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int n = size, temp, i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n; j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
				print_array(array, n);
			}
		}
	}
}
