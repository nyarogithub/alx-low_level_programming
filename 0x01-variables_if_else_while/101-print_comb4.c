#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, k;

	for (n = 35; n < 45; n++)
	{
		for (m = 36; m < 45; m++)
		{
			for (k = 37; k < 45; k++)
			{
				if (k > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(k);
					if (n != 42 || m != 43)
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
