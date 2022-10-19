#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: Nothing.
  */

int main(void)
{
	int a, res;

	for (a = 0; a < 1024; a++)
		if (a % 3 == 0 || a % 5 == 0)
			res += a;
	printf("%d\n", res);
	return (0);
}
