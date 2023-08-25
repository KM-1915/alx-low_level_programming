#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * before_main -  prints statement before the main function is executed
 *
 * Return: void
 */
void before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
void __attribute__((constructor)) beforemain()
{
	before_main();
}
