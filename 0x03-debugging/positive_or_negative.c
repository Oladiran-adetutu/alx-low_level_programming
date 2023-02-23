#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * positive_or_negative - checks for positive or negative numbers
 * @i: the number to be checked
 * Description: prints number sign
 * Return: Always 0
 */

void positive_or_negative(int i);

/**
 * positive_or_negative - tests sign
 * @i: the number to test
 * Description: tests whether n is +, - or zero
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
}
