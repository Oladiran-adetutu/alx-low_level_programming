#include "main.h"

/**
 * _strlen - function declaration
 * Description: find length of a string
 * @s: the string ptr
 * Return: index
 */

int _strlen(char *s);

/**
 * _strlen - function defination
 * Description: checkes string length
 * @s: string pointer
 * Return: index
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{}
	return (index);
}
