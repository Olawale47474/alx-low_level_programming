#include <stdio.h>

/**
 * main - Print all possible different combination of two digit,
 *        in ascending order, separated by comma followes by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int k, x;

	for (k = '0'; k <= '9'; k++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (k < x)
			{
				putchar(k);
				putchar(x);
				if (k != '8' || (k == '8' && x != '9'))
				{
					putchar(',');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
