#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the char to print
 *
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return(wtite(1, &c, 1));
}
