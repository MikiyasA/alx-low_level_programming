#include <math.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - conver binery to decimal
 * @b: binery input
 * Return: decml
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int v = 0;
int i = 0;

if ((b == NULL) && (!b))
return (0);

while (b[i] == '0' || b[i] == '1')
{
v <<= 1;
v += b[i] - '0';
i++;
}
return (v);
}

