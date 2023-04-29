#include <stdio.h>
#include "main.h"

/**
*_isdigit - check the code
*Returns 0 for non digit
*Returns 1 for digits
*/

int _isdigit(c)
{
char c;
if (c > 0 && c < 9)
{
return (1);
}
else
{
return (0);
}
