#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: the value
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char S2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n[i] = s2[j];
		}
	}
	return (n);
}