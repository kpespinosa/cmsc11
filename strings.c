#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main()
{
	string name = GetString();
	for (int i = 0, len = strlen(name); i < len; i++)
	{
		printf("%c\n", name[i]);	
	}
}

