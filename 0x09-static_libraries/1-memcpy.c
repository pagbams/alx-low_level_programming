#include "main.h"

/**
 * _memcpy -> memory copy
 * @n: number of bytes to be copied
 * @src: is source in memory
 * @dest: to memory area
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
