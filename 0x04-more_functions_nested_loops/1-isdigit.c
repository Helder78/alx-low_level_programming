#include "main.h"

/**
 * main - checking if the input is digit
 *
 * Return: 0 or 1
 */
int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}

	return (0);
}
