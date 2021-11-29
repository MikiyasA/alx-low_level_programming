#include "main.h"
#include <string.h>

/**
 * _strstr - locate substring
 * @haystack: whole string
 * @needle: substring
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
char c, sc;
int len;

c = *needle++;
if (c != '\0')
{
len = strlen(needle);
do {
do {
sc = *haystack++;
if (sc  == '\0')
return (NULL);
} while (sc != c);
} while (strncmp(haystack, needle, len) != 0);
haystack--;
}
return ((char *)haystack);
}
