#include "sort.h"
/**
 * bubble_sort - bubble sort algorithm.
 * @array: is the array we will sort.
 * @size: is the array size.
 * Return: nothing.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, end, j;

	if (size == 0)
		return;
	end = size - 1;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < end && end > 0)
		{
			if (j + 1 > end)
				break;
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			j++;
		}

		end--;
		i++;
	}
}
