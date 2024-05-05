#include "sort.h"
/**
 * selection_sort - implement of selection sort algorithm.
 * @array: the array to sort.
 * @size: the size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int i, j, smallest, swap_po, l = size;

	for (i = 0; i < l; i++)
	{
		swap_po = i;
		for (j = i; l > j; j++)
		{
			if (array[j] < array[swap_po])
			{
				swap_po = j;
				smallest = array[j];
			}
		}
		if (swap_po != i) 
		{
			array[swap_po] = array[i];
			array[i] = smallest;
			print_array(array, size);
		}
	}
}
