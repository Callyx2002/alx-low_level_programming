#include "main.h"
/**
 * print_last_digit - prints the lst digit
 * @n: is an integer vakue
 * Return: returns based on conditions met
 */
int print_last_digit(int n)
{
	int a = n % 10;
	
	if (n < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
