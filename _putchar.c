#include <unistd.h>

/**
 * _putchar- print a character
 * @c: The character to print
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
