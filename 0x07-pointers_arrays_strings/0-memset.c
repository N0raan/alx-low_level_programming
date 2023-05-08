#include <stdio.h>
#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s : pointer char
* @b : char variable
* @n : integer variable for loop
* Return: char value of s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i=0; i< n; i++)
{
s[i]=b;
}
return (s);
}
