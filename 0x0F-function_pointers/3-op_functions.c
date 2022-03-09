#ifndef _3_OP_FUNCTIONS_C_
#define _3_OP_FUNCTIONS_C_

#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add
 * @a: a
 * @b: b
 * Return: operation
 *
 */
int op_add(int a, int b);
{
	return (a + b);
}
/**
 * op_sub - sub
 * @a: a
 * @b: b
 * Return: operation
 *
 */
int op_sub(int a, int b);
{
	return (a - b);
}
/**
 * op_mul - mul
 * @a: a
 * @b: b
 * Return: operation
 *
 */
int op_mul(int a, int b);
{
	return (a * b);
}
/**
 * op_div - div
 * @a: a
 * @b: b
 * Return: operation
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod
 * @a: a
 * @b: b
 * Return: operation
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

#endif


