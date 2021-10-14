#include "main.h"

/**
 * set_bit - set the value of bit to 1
 * at given state
 * @n: pointer of us.int
 * @index: index of bit
 * Return: 1 if it worked or -1 or not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int a;

if (index > 63)
return (-1);

a = 1 << index;
*n = (*n | a);

return (1);

}
