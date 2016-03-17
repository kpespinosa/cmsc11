/**
Function design recipe
1. signature, purpose, stub
2. examples
3. template
4. code body
5. Test and debug
*/

/*
signature: int -> boolean
purpose: Return true if the given number is even, false otherwise.

//stub
bool is_even(int number)
{
	return false;
}
//template
bool is_even(int number)
{
	return ... number;
}
*/
#include <stdio.h>
#include <stdbool.h>

bool is_even(int number)
{
	return number % 2 == 0;
	// if (number % 2 == 0)
	// {
	// 	return true;
	// }
	// else
	// {
	// 	return false;
	// }
}

int main()
{
	printf("%d == %d\n", is_even(3), false);
	printf("%d == %d\n", is_even(4), true);
	printf("%d == %d\n", is_even(-2), true);
	printf("%d == %d\n", is_even(0), true);
}



