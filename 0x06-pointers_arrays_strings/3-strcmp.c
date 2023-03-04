#include "main.h"

/**
 * _strcmp - compares pointers to strings
 * @s1: points to the first string
 * @s2: points to the second string
 * Return: If s1 < s2, -ive diff
 * If s1 == s2, 0
 * If s1 > s2, +ve diff
 *
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
