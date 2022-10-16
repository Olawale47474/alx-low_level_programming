#include <stdio.h>

/**
 * main - Prints combination of numbers
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
