#include <unistd.h>
#include "main.h"

/**
*_putchar - writes the character c to sdtout
*c: The character to be printed
*Return: On success 0.
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
