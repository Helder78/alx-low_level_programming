#include <stdio.h>

/**
 * main - A program that prints all possible combinations of single digit numbers
 *
 * Return: Always(Success);
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}

