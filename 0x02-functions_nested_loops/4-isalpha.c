#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to be checked
 * Return: 1 if its an alphabet, otherwise 0
 */
int _isalpha(int c)
{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
