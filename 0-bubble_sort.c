#include "sort.h"
/**
 *
 *
 *
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
				temp = array [j - 1];
				array [j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
}
