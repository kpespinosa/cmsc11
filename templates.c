



/*
Templates
1. Sum the elements in array
A = {1,2,5} 
sum(A) = 8
*/

#include <stdio.h>

/*
int[] -> int
Return the sum of the elements of the array.
int sum(int size, int a[size])
{
	return 0;
}
int sum(int size, int a[size])
{
	int result;
	for (int i = 0; i < size; ++i)
	{
		... a[i]
	}
	return result;
}
*/

int sum(int size, int a[size])
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + a[i];
	}
	return sum;
}


int main()
{
	int size = 3;
	//category of inputs
	int a[] = {1,2,3};
	printf("%d==%d\n", sum(size, a), 6);
	int b[] = {1,-2,0};
	printf("%d==%d\n", sum(size, b), -1);

	//boundary cases
	size = 1;
	int c[] = {1};
	printf("%d==%d\n", sum(size, c), 1);

	size = 0;
	int d[] = {};
	printf("%d==%d\n", sum(size, d), 0);

	size = 2;
	int e[] = {1,-1};
	printf("%d==%d\n", sum(size, e), 0);

	//code coverage
	//loops: executed 0 times, once, more than 1
	//covered above




}

