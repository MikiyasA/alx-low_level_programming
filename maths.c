#include "operators.h"

/**
 * add - addition of a and b
 * @a: left operand
 * @b: right operand
 * Return: the result in int
 */
int add(int a, int b)
{
return ((a) + (b));
}

/**
 * sub - bubstraction of b from a
 * @a: left operand
 * @b: right operand
 * Return: the result in int
 */
int sub(int a, int b)
{
return ((a) - (b));
}

/**
 * mul - multiplcation of a and b
 * @a: left operand
 * @b: right operand
 * Return: the result in int
 */
int mul(int a, int b)
{
int c;
c = ((a) * (b));
return (c);
}
/**
 * div - divide a by b
 * @a: dividend
 * @b: divisor
 * Return: the result in float
 */
float div(int a, int b)
{
int c;
if (b > 0)
{
c = ((a) / (b));
return (c);
}
else:
{
return (0);
}
}
/**
 * mod - calculate a module of b
 * @a: 1st operand
 * @b: 2nd operand
 * Retunr: module int
 */
int mod(int a, int b)
{
int c;
c = ((a) % (b));
return (c);
}
