#include "main.h"

/**
 * main - a Prints the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
		_putchar(k);

	_putchar('\n');
}
