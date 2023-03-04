#ifndef CALC_H
#define CALC_H

/* standard libraries */
#include <stdio.h>
#include <stdlib.h>

/* structures */

/**
 * struct op - Struct op
 * @op: operator
 * @f: function pointer
 *
 * Description: struct op has the operator and the associated function pointer
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* function prototypes */

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /* CALC_H */
