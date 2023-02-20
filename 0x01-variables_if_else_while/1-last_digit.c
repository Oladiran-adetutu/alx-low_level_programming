#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
		int n;
		int Z;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		Z = n % 10;
		if (Z > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, Z);
		else if (Z == 0)
			printf("Last digit of %d is %d and is 0\n", n, Z);
		else if (Z < 6 && Z != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Z);
		return (0);
}
