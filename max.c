#include <stdio.h>

/*
int, int -> int
Return the larger number of two integers.
int larger(int x, int y)
{
	return 0;
}

int larger(int x, int y)
{
	... x, y;
	return 0;
}
*/

int larger(int x, int y)
{
	int larger = x;
	if (x > y)
	{
		larger = x;
	}
	else
	{
		larger = y;
	}
	return larger;
}

int main()
{
	printf("%d==%d\n", larger(2,3), 3);
	printf("%d==%d\n", larger(2,2), 2);
	printf("%d==%d\n", larger(3,2), 3);
}