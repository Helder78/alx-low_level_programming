#include <stdio.h>
#include <ctype.h>
/**
 * main - prints lowercase in reverse case
 *
 * Return: Always(Success)
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		c = toupper(c);
		putchar(c);
	}
	putchar('/n');
	return (0);
}

