#include "variadic_functions.h"
/**
 * print_all - print all kind of data
 * @format: data taype
 */
void print_all(const char * const format, ...)
{
va_list vlst;
unsigned int a = 0, b, z = 0;
char *strg;
const char t_arg[] = "cifs";
va_start(vlst, format);
while (format && format[a])
{
b = 0;
while (t_arg[b])
{
if (format[a] == t_arg[b] && z)
{
printf(", ");
break;
} b++;
}
switch (format[a])
{
case 'c':
printf("%c", va_arg(vlst, int)), z = 1;
break;
case 'i':
printf("%d", va_arg(vlst, int)), z = 1;
break;
case 'f':
printf("%f", va_arg(vlst, double)), z = 1;
break;
case 's':
strg = va_arg(vlst, char *), z = 1;
if (!strg)
{
printf("(nil)");
break;
}
printf("%s", strg);
break;
} a++;
}
printf("\n"), va_end(vlst);
}
