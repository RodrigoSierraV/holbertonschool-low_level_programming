#ifndef _3_CALC_H_
#define _3_CALC_H_
/**
 * struct op - types needed for simple operations
 * @op: pointer to sign of the operation
 * @f: pointer to function of the operation
 * Description: this structure put together integers, sign
 * and pointer to the operation to perfom
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif /*_3_CALC_H_*/
