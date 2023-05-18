#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * *malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: 98 if error ,else  pointer
 */

void *malloc_checked(unsigned int b)
{

	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
