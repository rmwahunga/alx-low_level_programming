#include "main.h"

#include <stdio.h>
#include <string.h>
/**
 * * puts_half - prints half string
 * *
 * *@str: string
 * * Return: void
 * */
void puts_half(char *str)
{
	int n = strlen(str);
	int i;
	if (n % 2 == 0)
	{
		for (i = 0; i < n / 2; i++)
		{
																		printf("%c", str[i]);
																	}
	}
	else
	{
		for (i = n / 2; i < n; i++)	
		{
																		printf("%c", str[i]);
																	}
	}
	printf("\n");
}
