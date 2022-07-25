#include "main.h"
/**
 * _memcpy() -  copies n bytes from memory area src to memory area dest
 *
 * Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}

