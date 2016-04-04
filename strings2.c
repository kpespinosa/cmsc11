#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main()
{
	string name = GetString();
	int len = strlen(name);
	for (int i = 0; i < 5000000; ++i)//leads to segmentation fault
	{
		printf("%c\n", name[i]);
	}
}
