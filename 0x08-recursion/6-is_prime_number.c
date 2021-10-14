#include "main.h"

/**
 * is_prime - check if the no. is prime or bot
 * @n: input no.
 * @c: iterator
 * Return: 1 or 0
 */

int is_prime(unsigned int n, unsigned int c)
{
if (n % c == 0)
{
if (n == c)
return (1);
else
return (0);
}
return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - detects if a number is a prime no.
 * @n: input no.
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
if (n == 0)
return (0);
if (n < 0)
return (0);
if (n == 1)
return (0);
return (is_prime(n, 2));
}
