#include <stdio.h>
#include <stdbool.h>

//function definitions
bool isPrime(int number);
int countPrimes(int n);

int main()
{
	//isprime
	printf("%d==%d\n", isPrime(2), true);
	printf("%d==%d\n", isPrime(1), false);
	printf("%d==%d\n", isPrime(3), true);
	printf("%d==%d\n", isPrime(4), false);

	//count primes
	printf("%d==%d\n", countPrimes(10), 4);
	printf("%d==%d\n", countPrimes(2), 1);
	printf("%d==%d\n", countPrimes(1), 0);

}

//wishlist functions
/*
isPrime(i)

int -> boolean
Return true if number is prime, false otherwise.
bool isPrime(int number)
{
	return false;
}
bool isPrime(int number)
{
	for (int i = start; i < stop; ++i)
	{
		...number
	}
	return false;
}

*/
bool isPrime(int number)
{
	bool isprime = true;
	if (number < 2)
	{
		isprime = false;
	}
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			isprime = false;
			break;
		}
	}
	return isprime;
}


/*
int -> int
Return the number of primes
from 1 to a given number n.
int countPrimes(int n)
{
	return 0;
}

int countPrimes(int n)
{
	for (int i = start; i < stop; ++i)
	{
		... n
	}
	
	return 0;
}
*/

int countPrimes(int n)
{
	int count = 0;
	for (int i = 2; i <= n; ++i)
	{
		if (isPrime(i))//goes into the wishlist
		{
			count++;
		}
	}
	return count;
}
