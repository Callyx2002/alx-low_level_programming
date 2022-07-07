#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 up to 102
 * Return: Always (Success)
 *
 */
int main(void)
{
	int a = 0;
	int z = 0;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			z += a;
		}
	}
	printf("%d\n", z);
	return (0);
}
