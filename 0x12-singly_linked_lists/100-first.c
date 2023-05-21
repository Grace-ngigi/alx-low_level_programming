#include <stdio.h>

void printSomeText(void) __attribute__ ((constructor));
/**
 * printSomeText - prints some text before main is executed
 * Return : Nothing
 */
void printSomeText(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
