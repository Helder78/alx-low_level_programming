#include <stdio.h>

/**
 * main - Prints all single digit number of base 10 starting from 0
 *
 * Return: Always (success)
 */
int main(void)
{
  char a;
  for (a = '0'; a <= '9'; a++)
    {
      putchar(a);
    }

  putchar('\n');
    
  return (0);
}
