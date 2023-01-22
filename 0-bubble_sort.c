#include "sort.h"


void swap_ints(int *a, int *b);


/**
 * swap_ints - This func swaps two integers in ana array
 * @a: The first integer
 * @b: The second integer
 */


void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * bubble_sort - Sorts an array of integers using the Bubble sort algorithm
 * @array: The array of integers to sort
 * @size: Size of the array described above
 * Return: 0
 */


void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubble = false;


	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < (len - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		len --;
	}
}
