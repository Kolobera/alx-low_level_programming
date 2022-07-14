#include "lists.h"

void prstart(void) __attribute__ ((constructor));

/**
 * prstart - start before main.
 * @void: input.
 */

void prstart(void)

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
