#include <stdio.h>
#include "cs50.h"
/*
My first C program
*/
//main function
#define COUNTRY "Philippines"

int main()
{
	// int a, b, c, d;//declaration of variables
	//assignment of values to variables
	// a = 1;
	// b = 2;
	// c = 3;

	// int a = 1;//declare and initialize
	const int VOTING_AGE = 18;

	printf("Hi there %s!\n", COUNTRY);

	char resp = 'y';
	do{
		//per group
		printf("How many are you?\n");
		int count = GetInt();

		for (int j = 1; j <= count; j++)
		{
			printf("What's your name?\n");
			string name = GetString();
			printf("Hi %s\n", name);
			
			printf("How old are you?\n");
			int age = GetInt();
			printf("Ah, so you are %d years old!\n", age);

			//check if age is a voting age
			if (age >= VOTING_AGE)
			{
				printf("You can vote!\n");
			} 
			else
			{
				printf("Sorry, you can't vote.\n");
			}

			int age_in_sec = age * 365 * 24 * 60 * 60;
			printf("You are alive for %d seconds. Keep living!\n", age_in_sec);

			if (age >= 13 && age <= 19)
			{
				printf("You are teenager.\n");

			}
			else
			{
				printf("You are either a baby or an adult.\n");
			}

			printf("How tall are you?\n");
			float height = GetFloat();
			printf("You're as tall as I %.2f\n", height);

			printf("Are you a student?(y/n)\n");
			char is_student = GetChar();
			printf("And when I asked you if you are a student, you said %s\n", 
				is_student=='y'? "yes":"no");
		}

		//ask
		printf("Are there other groups?(y/n)\n");
		resp = GetChar();
	}while(resp == 'y');
	printf("See you!\n");
		

	

	return 0;
}