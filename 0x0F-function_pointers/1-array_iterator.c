#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on array elements.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
