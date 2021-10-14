#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer to allocate memory
 */

void *malloc_checked(unsigned int b)
{
char *p;

p = malloc(b);

if (p == NULL)
{
exit(98);
}
return (p);
}
