#include <stdio.h>
#include "cs50.h"
//function prototype
int get_age();
string get_name();

int main()
{
	int age = get_age();
	printf("Your age: %i\n", age );
}

int get_age()//function signature: return type, name, parameters
{
	int age;
	do
	{
		printf("Enter age:\n");
		age = GetInt();
		// printf("%i\n", age);
	}while( age <= 0);
	return age;
}
string get_name()
{
	return "";
}