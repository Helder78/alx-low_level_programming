#include <stdio.h>

/**
 * main - print three differnt digit combinations
 *
 * Return: Always(Succes);
 */
int main(void)
{
	int c, i, x;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (x = '0'; x <= '9'; x++)
			{
				if (c < i && i < x)
				{
					putchar(c);
					putchar(i);
					putchar(x);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);

}

