/*
 * main.c
 *
 *  Created on: Nov 6, 2015
 *      Author: sam
 */

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

static int *permutations;

operation_t f1[] = {
		{"%s", NULL},
		{"%s!", op_fact},
		{"sqrt(%s)", op_sqrt},
};

operation_t f2[] = {
		{"%s+%s", op_add},
		{"%s-%s", op_sub},
		{"%s*%s", op_mul},
		{"%s/%s", op_div},
		{"%s^%s", op_pow},
		{"%s%%%s", op_mod}
}

void swap(void* a, void* b)
{
	void* tmp = a;
	a=b;
	b=tmp;
}

void permute(void* a, int l, int r)
{
   int i;
   if (l == r)
     domath();
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));

          permute(a, l+1, r);
//          swap((a+l), (a+i)); //backtrack
       }
   }
}

void domath(expression_t* expr, size_t len)
{

}

int main(int argc, char** argv)
{
	int n = 4;
	permutations = malloc(factorial(n)*sizeof(int));
	if(!permutations)
		return 1;
}
