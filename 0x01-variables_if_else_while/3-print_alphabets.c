#include <stdio.h>

/**
 * main - Print alphabet in lowercase then in uppercase in new line
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' alphabet++)
		putchar(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z' alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
