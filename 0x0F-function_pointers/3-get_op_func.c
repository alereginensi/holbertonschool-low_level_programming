#ifndef _3_GET_OP_FUNC_C_
#define _3_GET_OP_FUNC_C_

#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int);
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
	while (ops[i] < 5)
	{
		i++;
	}
}

#endif
