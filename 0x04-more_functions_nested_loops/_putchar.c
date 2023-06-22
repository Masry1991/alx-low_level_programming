#include <unisted.h>
#include "main"

/**
 * _putchar - writes the charchter c to stdout
 * @c: The charachter to print
 *
 * Return: On success 1.
 *         On error, -1 is returned, and errorno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
