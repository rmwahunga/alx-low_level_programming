#include "main.h"

#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half string
 *
 *@str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
	}												j++;
														}
	_putchar('\n');
}
