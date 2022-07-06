#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: character
 * Return: returns 0 and 1 based on the conditions
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
