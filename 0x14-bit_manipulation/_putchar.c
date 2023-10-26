#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success returns 1.
 * If there is an error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
