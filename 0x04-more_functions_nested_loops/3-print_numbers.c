#include "main.h"
/**
 *  * print_numbers - function that prints the numbers, from 0 to 9.
 *   *
 *    * Return: nothing.
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
