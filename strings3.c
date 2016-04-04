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

	printf("%d\n", len);
}
