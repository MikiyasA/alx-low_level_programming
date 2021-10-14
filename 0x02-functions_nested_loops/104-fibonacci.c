#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long a = 0, b = 1, s, ab1, ab2, ba1, ba2, c, d;
for (count = 0; count < 92; count++)
{
s = a + b;
printf("%lu, ", s);
a = b;
b = s;
}
ab1 = a / 10000000000;
ba1 = b / 10000000000;
ab2 = a % 10000000000;
ba2 = b % 10000000000;
for (count = 93; count < 99; count++)
{
c = ab1 + ba1;
d = ab2 + ba2;
if (ab2 + ba2 > 9999999999)
{
c += 1;
d %= 10000000000;
}
printf("%lu%lu", c, d);
if (count != 98)
printf(", ");
ab1 = ba1;
ab2 = ba2;
ba1 = c;
ba2 = d;
}
printf("\n");
return (0);
}
