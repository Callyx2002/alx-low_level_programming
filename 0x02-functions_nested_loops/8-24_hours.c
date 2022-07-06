#include "main.h"
/**
 * jack_bauer - prints the 9 times table
 * Return: no return
 *
 */
void jack_bauer(void)
{
	int a, s, d, f;

	for (a = 48; a <= 50; a++)
	{
		for (s = 48; s <= 57; s++)
		{
			for (d = 48; d = 53; d++)
			{
				for (f = 48; f <= 57; f++)
				{
					_putchar(a);
					_putchar(s);
					_putchar(58);
					_putchar(d);
					_putchar(f);
					_putchar('\n');
				}
			}
		}
	}
}
