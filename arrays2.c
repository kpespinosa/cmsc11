#include <stdio.h>
#include "cs50.h"

int get_times();
int GetPositiveInt();

int main()
{
	//get age of n students
	int n = get_times();
	int ages[n];
	for (int i = 0; i < n; ++i)
	{
		ages[i] = GetPositiveInt();
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%i\n", ages[i]);
	}
}
int GetPositiveInt()
{
	int n;
	do
	{
		printf("age:\n");
		n = GetInt();
	}while(n < 1);
	return n;
}

int get_times()
{
	int n;
	do
	{
		printf("How many?\n");
		n = GetInt();
	}while(n < 1);
	return n;
}