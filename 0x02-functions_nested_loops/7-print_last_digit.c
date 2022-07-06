#include "main.h"
/**
 * print_last_digit - prints the lst digit
 * @n: is an integer vakue
 * Return: returns based on conditions met
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (n % 10);
}
