#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, m, o, n;

	for (a = 48; a <= 57; a++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (o = 48; o <= 57; o++)
			{
				for (n = 48; n <= 57; n++)
				{
					if (((n + o) > (a + m) && n >= a) || a < n)
					{
						putchar(a);
						putchar(m);
						putchar(' ');
						putchar(o);
						putchar(n);

					if (a + m + o + n == 227 && a == 57)
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
