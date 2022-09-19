#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src including the terminating null byte to the buffer pointed to by dest
 * @*dest: destination address
 * @*src: source address
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
