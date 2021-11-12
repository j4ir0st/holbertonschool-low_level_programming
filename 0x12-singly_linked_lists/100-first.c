#include <stdio.h>
/**
 * before_main - prints a mesage before main
 */
void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
