#include <stdio.h>
#include "cs50.h"

int main()
{
	//get age of 4 students
	int n = 10;
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