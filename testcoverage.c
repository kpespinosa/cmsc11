#include <stdio.h>
#include <stdbool.h>

bool isTeenager(int age) {
	if (age >=13 &&  age <= 19)
		return true;
	return false;
}

int main() {
	//category of inputs: teenager and not
	printf("%d==%d\n", isTeenager(12), false);
	printf("%d==%d\n", isTeenager(13), true);

	//boundary cases
	printf("%d==%d\n", isTeenager(12), false);
	printf("%d==%d\n", isTeenager(13), true);
	printf("%d==%d\n", isTeenager(14), true);
	printf("%d==%d\n", isTeenager(18), true);
	printf("%d==%d\n", isTeenager(19), true);
	printf("%d==%d\n", isTeenager(20), false);

	//code coverage
	
}

