#include "main.h"

/**
 *  _isdigit - Entry point
 * Description:  A function that checks for a digit (0 through 9).
 * @c: the integer value it receives ..
 * Return: Returns 1 if c is uppercase.  Returns 0 otherwise
 */

int _isdigit(int c)
{
if (c >= '0'  && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
