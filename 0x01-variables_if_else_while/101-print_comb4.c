#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, k;

	for (n =35; n < 42; n++)
	{
		for (m = 35; m < 43; m++)
		{
			for (k = 35; k < 44; k++)
			{
				if (k > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(k);
					if (n != 41 || m != 42)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
