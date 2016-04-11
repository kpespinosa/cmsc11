/*
Check if the number is prime. 
int n = 6;
6: 2,3,4,5

RANGE PROBLEM
*/

bool isPrime(int n)
{
	bool result;
	for (int i = start; i < stop; ++i)
	{
		... i
	}
	return result;
}


bool isPrime(int n)
{
	bool result;
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			result = false;
			break;
		}
	}
	return result;
}