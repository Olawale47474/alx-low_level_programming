#include "main.h"
#include "main_.c"
/**
 * main -prints the n times, table
 *
 * Return: Always 0.
 */
int main(void)
{
	print_times_table(0);
	_putchar('\n');
	print_times_table(15);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);  
	return (0);
}
