#include <stdio.h>

/*
int -> int
City ordinance to add allowance of students by 50 percent.
int addAllowance(int currentAllowance) {
	return 0;
}
const float PERCENT_INCREASE = 0.5;
int addAllowance(int currentAllowance) {
	...currentAllowance, PERCENT_INCREASE, 

	return 0;
}
*/
const float PERCENT_INCREASE = 0.5;
int addAllowance(int currentAllowance) {
	
	return currentAllowance + (currentAllowance * PERCENT_INCREASE);
}

int main() {
	printf("%d==%d\n", addAllowance(10), 15);
}

