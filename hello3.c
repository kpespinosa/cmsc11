#include <stdio.h>
#include "cs50.h"

int main()

{
	//int age;
	printf("State your name:\n");
	string name = GetString();
	printf("Age:\n");
	int age = GetInt();

	//scanf("%d",&age);

	printf("Happy %dth birthday, %s!\n", age, name);
}