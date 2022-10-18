#include "school.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char *sh = "school";

	while (*sh)
	{
		_putcha(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}



