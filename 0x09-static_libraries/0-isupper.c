#include "main.h"
/**
 * _isupper - checks if letter is upper case
 * @c: variable text
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
