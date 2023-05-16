#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @c: array name
 * @size: the size of the memory 
 *
 * Return: 1 in success , 0 if array empty
 */

char *create_array(unsigned int size, char *c)
{
char *n = malloc(size);
if (size == 0 || n == 0)
	return (0);
while (size--)
	n[size] = c;

return (n);
}
	
