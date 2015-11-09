/*
 * functions.h
 *
 *  Created on: Nov 7, 2015
 *      Author: sam
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#define MAX_EXPR_LEN 40

typedef struct
{
	char*	op_str;
	double (*f)(double n1, double n2);
} operation_t;

typedef struct
{
	char expr[MAX_EXPR_LEN];
	double result;
} expression_t;

double op_sub(double n1, double n2);
double op_add(double n1, double n2);
double op_mul(double n1, double n2);
double op_div(double n1, double n2);
double op_pow(double n1, double n2);
double op_mod(double n1, double n2);

double op_sqrt(double n1, double n2);
double op_3rt(double n1, double n2);
double op_fact(double n1, double n2);


#endif /* FUNCTIONS_H_ */
