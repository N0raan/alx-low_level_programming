#include <stdio.h>
#include "main.h"

/**
 * _putchar - print the char c
 * @c : character to print
 *
 * Return: 1 in success
 * on error, -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
