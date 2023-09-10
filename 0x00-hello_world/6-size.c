#include <stdio.h>

/**
 * main - Prints the size of various data types
 *
 * Return: Always(Success);
 */
int main(void)
{
	int b;
	char a;
	long int c;
	long long int d;
	float e;
	
	printf("Size of a char:\n", sizeof(a));
	printf("Size of an int:\n", sizeof(b));
	printf("Size of a long int:\n", sizeof(c));
	printf("Size of a long long int:\n", sizeof(d));
	printf("Size of a float: \n", sizeof(e));

	return (0);

}

