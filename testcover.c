#include <stdio.h>
#include <stdbool.h>
/*
int -> bool
Return true if the number is positive, false otherwise.
bool isPositive(int number) 
{
	return false;
}
bool isPositive(int number) 
{
	... number;
	return false;
}

*/
bool isPositive(int number) 
{
	if (number > 0)
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
	//category of inputs: pos, neg, zero
	printf("%d==%d\n", isPositive(1), true);
	printf("%d==%d\n", isPositive(0), false);
	printf("%d==%d\n", isPositive(-1), false);

	//boundary cases
	printf("%d==%d\n", isPositive(1), true);	
	printf("%d==%d\n", isPositive(0), false);	
	printf("%d==%d\n", isPositive(2), true);	

	// printf("%d==%d\n", isPositive(0), false);	
	// printf("%d==%d\n", isPositive(1), true);	
	printf("%d==%d\n", isPositive(-1), false);	

	// printf("%d==%d\n", isPositive(-1), false);	
	// printf("%d==%d\n", isPositive(0), false);	
	printf("%d==%d\n", isPositive(-2), false);	


	//code coverage
	printf("%d==%d\n", isPositive(1), true);	
	printf("%d==%d\n", isPositive(-1), false);	
}


/* Test coverage
1. all category of inputs
-pos int, neg int, zero
2, -3, 0
2. boundary cases
- pos int: 1,0,2
- neg int: -1, 0, -2
- zero: 0, 1, -1
3. code coverage
-bool testIfNumberIsPositive(int number) {
	if (number > 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
0
1
*/
