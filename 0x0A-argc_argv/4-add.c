#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i= 1, total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	while (i < argc)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		total += atoi(argv[i]);
		i++;
	}
	printf("%d\n", total);
	return (0);
}
