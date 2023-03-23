#include <stdio.h>
#include <stdlib.h>
#include "3-cal.h"
/**
 * get_op_func - gets the right func
 * @s: function s
 * Return: int value
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},

