#include "operators.h"

/**
 * add - addidion on a and b
 * @a: left operand
 * @b: right operand
 * Return: the result in imt
 */
int add(int a, int b)
{
return ((a) + (b));
}
/**
 * sub - substraction of a and b
 * @a: lest operand
 * @b: right operand
 * Return: the result in int
 */
int sub(int a, int b)
{
return ((a) - (b));
}
/**
 * mul - multiplication of a and b
 * @a: left operand
 * @b: right operand
 * Return: the resuln in int
 */
int mul(int a, int b)
{
int c;
c = ((a) * (b));
return (c);
}
/**
 * div - division on a over b
 * @a: dividend
 * @b: divisor
 * Return: the result in int
 */
int div(int a, int b)
{
int c;
if (b > 0)
{
c = ((a) / (b));
return (c);
}
else
return (0);
}
/**
 * mod - modulo of a and b
 * @a: left operand
 * @b: right operand
 * Return: the result in int
 */
int mod(int a, int b)
{
int c;
c = ((a) % (b));
return (c);
}
