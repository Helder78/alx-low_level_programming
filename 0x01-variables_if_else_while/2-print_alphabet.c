#include <stdio.h>

int main ()
{
//my code goes here
  for (int x = 'A'; x < 'Z'; x++)
    {
      x = tolower(x);
      putchar(x);
    }
  return (0);
}

  
