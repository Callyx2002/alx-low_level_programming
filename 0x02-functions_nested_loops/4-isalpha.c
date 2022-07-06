#include "main.h"
/**
 * _isalpha - tells us if the sunction is an upper or a lower case
 * @c: is a character to be checked on
 * Return: returns 1 or 0 based on the condition
 */
int _isalpha(int c)
{
	if ((c = 'a' && c <= 'z') || (c = 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
