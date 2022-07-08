#include "main.h"
/**
 *  _isdigit - chexk if a number is between 0 and 9
 *  @c: is the input
 *  Return: returnal1 1 or 0 based on the condition
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
