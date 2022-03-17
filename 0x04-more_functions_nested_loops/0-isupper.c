#include "main.h"

/**
 *  _isupper - Entry point
 * Description: checks for uppercase character.
 * @c: the integer value it receives
 * Return: Returns 1 if c is uppercase. Returns 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A'  && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
