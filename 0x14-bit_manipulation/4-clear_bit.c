#include "main.h"

/**
 * clear_bit - set value of bit to 0
 * at give index
 * @n: pointer of us.int
 * @index: index of bit
 * Return: 1 if it worked or -1 or not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int a;

if (index > 63)
return (-1);

a = 1 << index;

if (*n & a)
*n ^= a;

return (1);
}
