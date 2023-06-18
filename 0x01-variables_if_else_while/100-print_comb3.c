#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 35; n <= 42; n++)
	{
		for (m = 36; m <= 44; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 35 || m != 44)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
