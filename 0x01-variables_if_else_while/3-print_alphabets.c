#include <stdio.h>

/**
 * main - Print alphabet in lowercase then in uppercase in new line
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
