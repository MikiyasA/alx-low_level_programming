#include "main.h"


/**
 * _isalpha - check if it is alphabet or not
 * @c: The character in ASCII code
 * Return: 1 is it is alpha, 2 if it not
 */

int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar ('\n');

}
