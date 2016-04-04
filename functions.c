#include <stdio.h>
#include "cs50.h"

int get_age();

int main()
{
	int age = get_age();
	printf("%i\n", age);
}

int get_age()
{
	int n;
	do
	{
		printf("age:\n");
		n = GetInt();
	}while( n < 1);
	return n;
}