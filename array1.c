#include <stdio.h>
#include "cs50.h"

int get_n();

int main()
{
	//get age of 4 students
	int n = get_n();
	int ages[n];

	for (int i = 0; i < n; ++i)
	{
		ages[i] = GetInt();	
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%i\n", ages[i]);
	}	
}

int get_n()
{
	int n;
	do
	{
		printf("How many?\n");
		n = GetInt();
	} while ( n < 1);
	return n;
}