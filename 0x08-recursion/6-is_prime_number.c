#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: Number Integer
 * @y: Power
 *
 * Return: On success 1.
 * Base case  -> if y less thN 0.
 */
int is_prime_number(int n)
{
	return (_is_prime_helper(n, n - 1));
}

/**
 * _is_prime_helper - returns the natural square root of a number.
 * @n: input number.
 * @x: current number.
 * Return: natural square root.
 */
int _is_prime_helper(int n, int x)
{
	if (n <= 1)
		return (1);
	if (n % x != 0)
		return (1 && _is_prime_helper(n, x - 1));
	if (n % x  == 0)
		return (0);
}

