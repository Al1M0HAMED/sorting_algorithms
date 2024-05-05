#include "sort.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	    int array[] = {2, 3, 9, 5, 1, 4, 8, 6, 7, 0};
	        size_t n = sizeof(array) / sizeof(array[0]);

		    print_array(array, n);
		        printf("\n");
			    selection_sort(array, n);
			        printf("\n");
				    print_array(array, n);
				        return (0);
}
