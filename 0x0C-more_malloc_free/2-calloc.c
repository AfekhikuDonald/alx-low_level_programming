#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size:size of each elements
 * Return: pointer to the allocated memoryon success else return fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * (nmemb * size + 1));
	if (array == NULL)
		return (NULL);
	return (array);
}
