#include "sort.h"
/**
 * quick_sort - does quick sort.
 * @array: is the array.
 * @size: is the array's size.
 * Return: nothing.
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	qs(array, 0, size - 1, size);
}
/**
 * qs - does quick sort.
 *
 * @array: is the array
 * @start: is the start of the array.
 * @end: is the end of the array.
 * @size: is the array size.
 *
 * Return: nothing.
 */
void qs(int *array, int start, int end, size_t size)
{
	size_t mid;
	int pivot, temp, low, high;

	low = start;
	high = end;
	mid = low + (high - low) / 2;
	pivot = array[mid];

	while (low <= high)
	{
		while (low <= high && array[high] > pivot)
			high--;
		while (low <= high && array[low] < pivot)
			low++;
		if (low <= high)
		{
			temp = array[high];
			array[high] = array[low];
			array[low] = temp;
			high--;
			low++;
			print_array(array, size);
		}

	}
	if (start < high)
		qs(array, start, high, size);
	if (low < end)
		qs(array, low, end, size);
}
