#include "main.h"

/**
 * _strcpy - copies the string pointed to the src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = n '\0';
	return (dest);
}
