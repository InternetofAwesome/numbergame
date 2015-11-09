/*
 * functions.c
 *
 *  Created on: Nov 7, 2015
 *      Author: sam
 */

#include "functions.h"
#include "math.h"

void math_op(expression_t *dest, expression_t *ex1, expression_t *ex2, operation_t *op)
{
	sprintf(dest->expr, op->op_str, ex1->expr, ex2->expr);
	dest->result = op->f(ex1->result, ex2->result);
}

double op_sub(double n1, double n2)
{
	return n1-n2;
}

double op_add(double n1, double n2)
{
	return n1+n2;
}

double op_mul(double n1, double n2)
{
	return n1*n2;
}

double op_div(double n1, double n2)
{
	return n1/n2;
}

double op_pow(double n1, double n2)
{
	return pow(n1, n2);
}

double op_mod(double n1, double n2)
{
	return n1%n2;
}

double op_sqrt(double n1, double n2)
{
	return pow(n1, 1.0/2.0);
}

double op_3rt(double n1, double n2)
{
	return pow(n1, 1.0/3.0);
}

double op_fact(double n1, double n2)
{
	int i=n1;
	while(--i>0)
		n1*=i;
	return i;
}
