#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= Z)
			*(s + i) -= 'a' - 'A';
			i++;
	}
	return (s);
}
