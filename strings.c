#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main()
{
	string name = GetString();
	int len = strlen(name);
	for (int i = 0; i < len; ++i)
	{
		printf("%c\n", name[i]);
	}
}

/**
int ar[5];
[5][3][2][1][7]

ar[0] -> 5
ar[1] -> 3

string ~ char ar[]

char name[5];//declaration of arrays
[k][u][r][t][]

name[0] -> k
name[3] -> t
name[4] -> 
name[5] -> k
*/