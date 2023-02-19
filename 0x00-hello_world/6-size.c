#include <stdio.h>

/**
 * main - main function of mine
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char: %iu byte(s)", sizeof(char));

	printf("Size of an int: %iu byte(s)", sizeof(int));

	printf("Size of a long int: %iu byte(s)", sizeof(long int));
	printf("Size of a long long int: %iu byte(s)", sizeof(long long int));
	printf("Size of a float: %iu byte(s)", sizeof(float));
	printf("\n");
	return (0);
}
