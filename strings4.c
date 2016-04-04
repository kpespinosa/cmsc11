#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main()
{
	char name[] = "Hello World";
	int count = strlen(name);
	for (int i = 0; i < count; ++i)
	{
		printf("%c\n", name[i] + 1);
	}
}
