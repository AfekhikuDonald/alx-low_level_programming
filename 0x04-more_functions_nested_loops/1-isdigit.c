#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the character to be checked
 * Return: 1 if its a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') || ( c < '0' && c > '9'));
}
