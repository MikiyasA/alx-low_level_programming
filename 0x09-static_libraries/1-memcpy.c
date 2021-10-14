#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: source
 * @n: no. of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
const char *s = src;
while (n--)
*d++ = *s++;
return (dest);
}
