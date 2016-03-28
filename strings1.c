#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main()
{
	for (int i = 65; i < 65 + 26; ++i)
	{
		printf("%c: %i\n", (char)i, i);//typecasting
	}
}
