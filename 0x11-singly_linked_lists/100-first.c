#include<stdio.h>
/**
 * startupfun - prints before the main function is executed.
 */
void startupfun(void) __attribute__ ((constructor));
void startupfun(void)
{
	printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
