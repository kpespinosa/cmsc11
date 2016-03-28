#include <stdio.h>
#include "cs50.h"

void cough(int times);
void sneeze(int times);
void greet(int times);
void express(string expression, int times);
int get_times();

int main()
{
	int a = get_times();
	cough(a);
	sneeze(a);
	greet(a);
	return 0;
}
int get_times()
{
	int n;
	do
	{
		printf("Input # times:\n");
		n = GetInt();
	}while(n < 1);
	return n;
}
void express(string expression, int times)
{
	for (int i = 0; i < times; ++i)
	{
		printf("%s\n", expression);
	}
}
void cough(int times)
{
	express("cough", times);
}
void sneeze(int times)
{
	express("acho", times);
}
void greet(int times)
{
	express("hey", times);
}


