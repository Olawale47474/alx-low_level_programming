#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, m, o, n;

	for (a = 50; a <= 57; a++)
	{
		for (m = 50; m <= 57; m++)
		{
			for (o = 50; o <= 57; o++)
			{
				for (n = 50; n <= 57; n++)
				{
					if (((n + o) > (a + m) && n >= a) || a < n)
					{
						putchar(a);
						putchar(m);
						putchar(' ');
						putchar(o);
						putchar(n);
					if (a + m + o + n == 234 && a == 57)
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
