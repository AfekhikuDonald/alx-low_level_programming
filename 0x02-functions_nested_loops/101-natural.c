#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: always 0(success)
 */
int main(void)
{
	unsigned long int 3sum, 5sum, sum;
	int i;

	3sum = 0;
	5sum = 0;
	sum = 0;
	
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
			3sum = 3sum + i;
		else if ((i % 5) == 0)
			5sum = 5sum + i;
	}
	sum = 3sum + 5sum;
	printf("%lu\n", sum);
	return (0);
}
