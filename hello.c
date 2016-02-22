#include <stdio.h>
#include "cs50.h"

int main()
{
	printf("State your name:\n");
	string name = GetString();
	printf("Hello %s!\n", name);
}