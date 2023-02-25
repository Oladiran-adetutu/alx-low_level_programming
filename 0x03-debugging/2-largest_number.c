#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c);

/**
 * largest_number - return max
 * @a: the first number
 * @b: the second number
 * @c: the third number
 * Return: the largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a  && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c  >= b)
	{
		largest = c;
	}
	return (largest);
}
