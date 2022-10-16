#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int k, m, o, n;

	for (k = 48; k <= 57; k++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (o = 48; o <= 57; o++)
			{
				for (n = 48; n <= 57; n++)
				{
					if (((o + n) > (k + m) && o >= k) || k < n)
					{
						putchar(k);
						putchar(m);
						putchar(' ');
						putchar(o);
						putchar(n);

					if (k + m + o + n == 227 && k == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
