#include <stdio.h>

/**
 * main - main function of mine
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char: %i byte(s)", sizeof(char));

	printf("Size of an int: %i byte(s)", sizeof(int));

	printf("Size of a long int: %i byte(s)", sizeof(long int));
	printf("Size of a long long int: %i byte(s)", sizeof(long long int));
	printf("Size of a float: %i byte(s)", sizeof(float));
	printf("\n");
	return (0);
}
