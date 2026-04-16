#include "sort.h"
/**
 * selection_sort - selection sort is so poor and easy.
 * @array: is the array.
 * @size: is size!.
 * Return: nothing..
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, smallest;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		smallest = i;
		while (j < size)
		{
			if (array[j] < array[smallest])
				smallest = j;
			j++;
		}
		if (array[smallest] < array[i])
		{
			temp = array[smallest];
			array[smallest] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
		i++;
	}
}
