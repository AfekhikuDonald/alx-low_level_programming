#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of arguments
 * @...: variable number of functions
 * Return: 0 if n is zero else return the summ of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x = 0;

	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x += va_arg(args, unsigned int);
	}
	return (x);
	va_end(args);
}
