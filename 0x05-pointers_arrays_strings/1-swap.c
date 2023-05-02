#include <stdio.h>
#include "main.h"

/**
* swap_int - swap between two integers
* @a : pointer integer
* @b : pointer integer
**/

void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}
