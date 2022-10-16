#include <stdio.h>

/**
 * main - Prints all different combinations of three digits
 *        Numbers must be separated by ,
 *
 * Return: Always 0
 */
int main(void)
{
	int w, x, z;
		for  (w = '0'; w <= '9'; w++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (w < x && x < z)
				{
					putchar (w);
					putchar (x);
					putchar (z);
					if (w != '7')
					{
						putchar(',');
						putchar(',');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
