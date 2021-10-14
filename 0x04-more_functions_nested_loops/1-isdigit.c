#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check c is digit or not
 * @c: - to be check parametr
 * Return: 0 and 1
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
