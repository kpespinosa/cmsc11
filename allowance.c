#include <stdio.h>

/*Problem: The city has come out with a new ordinance to add 15% to the allowances of students. Compute for the new allowance of a student given his existing allowance.
*/

/*
float -> float
Compute new allowance given current allowance (with
15% increase in the allowance)
float newAllowance(float allowance) 
{
	return 0.0;
}
float newAllowance(float allowance) 
{
	const float PERCENT_INCREASE = 0.15; 
	... allowance, PERCENT_INCREASE;
	return 0.0;
}
*/


float newAllowance(float allowance) 
{
	const float PERCENT_INCREASE = 0.15; 

	//... allowance, PERCENT_INCREASE;
	// PERCENT_INCREASE = 0.20; 
	allowance = (allowance * PERCENT_INCREASE) + allowance;

	return allowance;
}

int main() 
{
	printf("%0.2f==%0.2f\n", newAllowance(100.00), 115.00);
}



