#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to be initialised
 * Return: null if size is 0 else
 * 		returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(sizeof(c) * size);

	if (arr == 0)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i ) = c;
		}
	return (arr);
	}
	free (arr);
}
