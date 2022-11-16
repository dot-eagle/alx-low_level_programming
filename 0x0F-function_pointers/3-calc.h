#ifndef _3_CALC_H
#define _3_CALC_H


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * struct op - Struct op
 *
 * @op: pointer operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int _putchar(char);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* _3_CALC_H */
