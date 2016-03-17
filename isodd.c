/**
Function Design Recipe
1. signature, purpose, stub
2. examples
3. templates
4. code body
5. test and debug
*/

/**
signature: int -> bool
purpose: Return true if the given number is odd, 
false otherwise.

//stub
bool is_odd(int number)
{
	return false;
}
//template
bool is_odd(int number)
{
	... number;
}
*/

#include <stdbool.h>
#include <stdio.h>

bool is_odd(int number)
{
	if (number % 2 == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	printf("%d == %d\n", is_odd(4), false);
	printf("%d == %d\n", is_odd(5), true);
	printf("%d == %d\n", is_odd(0), false);
	printf("%d == %d\n", is_odd(2), false);
}