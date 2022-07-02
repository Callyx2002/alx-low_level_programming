#include <stdio.h>
/**
 * main -Wntrh point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n, x;

	n = 48;
	x = 48;

	while (x < 58)
	{
		n = 48;
		while (n < 58)
		{
			if (x != n && x < n)
			{
				putchar(x);
				putchar(n);
				if (n == 57 && x == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
