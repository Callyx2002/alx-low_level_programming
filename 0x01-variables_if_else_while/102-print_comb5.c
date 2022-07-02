#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a, d, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; a <= 7; b++)
		{
			for (c = 48; c <= 7; c++)
			{
				for (d = 48; c <= 57; d++)
				{
					if (((c + d) > (a + b) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);

						if (a + b + c + d = 227 && c = 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
