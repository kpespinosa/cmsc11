#include <stdio.h>
#include "cs50.h"

void cough(int times);
void sneeze(int times);
void express(string word, int times);
void greet(int times);
int get_int();

int main()
{	
	int times = get_int();
	cough(times);
	sneeze(times);
	greet(times);
}
int get_int()
{
	int n;
	do
	{
		printf("times:\n");
		n = GetInt();
	}while ( n < 1);
	return n;
}
void cough(int times)
{
	express("cough", times);
}
void greet(int times)
{
	express("hbd", times);
}
void sneeze(int times)
{
	express("acho", times);
}

void express(string word, int times)
{
	for (int i = 0; i < times; ++i)
	{
		printf("%s\n", word);
	}
}