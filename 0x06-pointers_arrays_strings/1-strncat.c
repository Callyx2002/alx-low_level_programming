#include "main.h"
/**
 * _strncat - joins two strings
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: a charcter pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
