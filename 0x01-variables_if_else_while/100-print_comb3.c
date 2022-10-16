#include <stdio.h>

/**
 * main - Print all possible different combination of two digit,
 *        in ascending order, separated by comma followes by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int w, x;

	for (w = '0'; w <= '9'; c++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (c < x)
			{
				putchar(c);
				putchar(x);
				if (c != '8' || (c == '8' && x != '9'))
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
