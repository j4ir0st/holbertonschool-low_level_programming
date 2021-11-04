#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Struct op
 * @s: char arg
 */

int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while(i < 5)
	{
		if(strcmp(ops[i].op, s) == 0)
		{
			return(ops[i].f);
		}
		i++;
	}
	return (NULL);
}
