#include "holberton.h"

/**
 * _islower - Shows 1 if the input is a
 * @c: The character in ASCII code
 * lowercase character. Another cases, shows 0*
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
