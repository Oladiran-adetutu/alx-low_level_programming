#include "main.h"

/**
 * print_line - function declaration
 * Description: print dashes n times
 * @n: number of dashes to print
 * Return: has no return values
 */

void print_line(int n);

/**
 * print_line - function defination
 * Description: print dashes as many as n times
 * @n: number of dashes
 * Return: has non
 */

void print_line(int n)
{
	int counter = 0;

	while (n > 0 && counter < n)
	{
		_putchar('_');
		counter++;
	}
	_putchar('\n');
}
