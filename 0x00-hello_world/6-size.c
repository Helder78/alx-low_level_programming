#include <stdio.h>

/**
 * main - Prints the size of various data types
 *
 * Return: Always(Success);
 */
int main(void)
{
	int b = 4;
	char a = 'a';
	long int c = 78;
	long long int d = 45;
	float e = 56.70;
	
	printf("Size of a char:", sizeof(a),"byte(s)\n");
	printf("Size of an int:", sizeof(b),"bytes(s)\n");
	printf("Size of a long int:", sizeof(c),"bytes(s)\n");
	printf("Size of a long long int:", sizeof(d),"bytes(s)\n");
	printf("Size of a float:", sizeof(e),"bytes(s)\n");

	return (0);

}

