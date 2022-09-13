#include "main"

/**
 * print_times_table - prints the n times table
 * @n: the number to be printed
 */
void print_times_table(int n)
{
	int i, j, k;

	if (i >= 0 && i <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				}
				else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k > 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((K / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((K / 100) + '0');
					_putchar(((K / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
