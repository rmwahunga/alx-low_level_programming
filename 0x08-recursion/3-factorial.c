#include "main.h"
/**
 * int factorial returns factorial of a given number
 *
 * @n: is the number
 *
 * Return: if n is less than 0 return -1 to indicate an error, Factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
