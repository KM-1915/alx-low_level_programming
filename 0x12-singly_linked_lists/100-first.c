#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
void __attribute__((constructor)) before_main();
/**
 * before_main -  prints statement before the main function is executed
 *
 * Return: void
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
