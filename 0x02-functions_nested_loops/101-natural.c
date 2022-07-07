#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 up to 102
 * Return: Always (Success)
 *
 */
int main(void)
{
	int a = 0;
	int z =0;

	while (z < 1024)
	{
		if ((a % 3 == 0) || (z & 5 == 0))
		{
			z += a;
		}
		a++;
	}
	printf("%d\n", z);
	return (0);
}
