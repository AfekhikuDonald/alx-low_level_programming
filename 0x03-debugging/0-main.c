#include <stdio.h>
#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
	int i, j;

	i = 0;

	j = positive_or_negative(i);
	return (printf("%d", j));
}
