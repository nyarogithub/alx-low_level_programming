#include <unistd.h>

/**
 *_putchar -writes the character c to sdtout
 *@c: The character to be printed
 *Return: On success 1.
 *On erro, -1 is returned and errors must be appropriately set.
 */

int _putchar(char c)
{
	return(write(1, $c, 1));
}
