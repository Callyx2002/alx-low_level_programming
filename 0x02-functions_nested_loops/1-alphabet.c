#include "main.h"
/**
 * main - Entry point
 *print_alphabet - function prints letters of the alphabet in lower case
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i;
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
}
