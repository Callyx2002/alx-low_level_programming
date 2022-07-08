#include "main.h"
/**
 * _isupper - Checknif c is an upper or a lower case alphabet
 * @c: is a character
 * Return: returns 0 or 1 based on he condition
 */
int _isupper(int c);
{
	char c;

	if (c >= 'A' || c <= 'Z')
	{
		_putchar(c);
	}
	else
		return (0);
}
