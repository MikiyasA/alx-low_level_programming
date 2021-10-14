#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of character
 * @c: character
 * Return: a
 */

char *create_array(unsigned int size, char c)
{
char *cr;
unsigned int i;

if (size == 0)
return (NULL);

cr = malloc(sizeof(c) * size);

if (cr == NULL)
return (NULL);

for (i = 0; i < size; i++)
cr[i] = c;

return (cr);
}
