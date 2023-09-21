#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int retval = 0;

	while (*s1 == *s2 && * s1)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		retval = (*s1 + '0') - (*s2 + '0');
	return (retval);
}
