#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJLKMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		j = 0;
		while (let[j])
		{
			if (s[i] == let[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
