#include "sort.h"
/**
 * bubble_sort - bubble sort algorithm.
 * @array: is the array we will sort.
 * @size: is the array size.
 * Return: nothing.
 */
void bubble_sort(int *array, size_t size)
{
	int temp, swap;
	size_t i, end, j;

	if (size < 2 || !array)
		return;
	end = size - 1;
	i = 0;
	swap = 0;
	while (i < size)
	{
		j = 0;
		swap = 0;
		while (j < end)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
				swap = 1;
			}
			j++;
		}
		if (!swap)
			return;
		end--;
		i++;
	}
}
