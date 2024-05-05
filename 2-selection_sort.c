#include "sort.h"
/**
 * selection_sort - implement of selection sort algorithm.
 * @array: the array to sort.
 * @size: the size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int i, j, smallest, found_smallest, swap_index, l = size;

	for (i = 0; i < l; i++)
	{
		smallest = array[i], found_smallest = 0;
		for (j = i; l > j - 1; j++)
		{
			if (array[j] < smallest)
			{
				swap_index = j;
				smallest = array[j];
				found_smallest = 1;
			}
		}
		if (found_smallest)
		{
			array[swap_index] = array[i];
			array[i] = smallest;
			print_array(array, size);
		}
	}
}
