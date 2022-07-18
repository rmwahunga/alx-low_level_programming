#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @c: character to locate in the string
 *
 * @s: the string to check for the character
 *
 * Return: pointer to first instance of c, else return null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	else
	{
		return (NULL);
	}
}
