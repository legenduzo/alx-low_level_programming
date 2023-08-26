#include <stdio.h>
#include "lists.h"

/**
 * pre_main - prints something before main
 *
 * Return: void
 */

void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
