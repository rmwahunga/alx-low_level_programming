#include "main.h"

/**
 * main - check the code for a digit (0 through 9).
 * Returns 1 if c is a digit
 * Return 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
