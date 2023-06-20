#include "main.h"

/**
 *main - print_alphabet,
 *Followed by new line
 *Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void);
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
