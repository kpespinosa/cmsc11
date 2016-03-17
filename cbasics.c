#include <stdio.h>
#include "cs50.h"
#include <stdbool.h>


int convert_age_to_sec(int age)
{
	return age * 365 * 24 * 60 * 60;
}

string ask_name()
{
	printf("What's your name?\n");
	return GetString();
}

int how_many_students()
{
	printf("How many are you?\n");
	return GetInt();
}

int how_old()
{
	printf("How old are you?\n");
	return GetInt();	
}

bool is_teenager(int age)
{
	return age>= 13 && age <=19;
}

float how_tall()
{
	printf("How tall are you?\n");
	return GetFloat();	
}

string is_student()
{
	printf("Are you a student(yes/no)?\n");
	return GetString();
}

void print_int(int value, string str1, string str2)
{
	printf("%s %d %s", str1, value, str2);
}

void print_float(float value, string str1, string str2)
{
	printf("%s %f %s", str1, value, str2);
}

void print_string(string value, string str1, string str2)
{
	printf("%s %s %s", str1, value, str2);
}


void process_group(int num_students)
{
	const int VOTING_AGE = 18;
	for(int i = 1; i <= num_students; i++)
		{
			
			print_string(ask_name(), "Hi ",".\n" );

			int age = how_old();
			print_int(age, "I am also", "years old!\n");
			/**
			1 year 365 days
			1 day 24 hours
			1 hour 60 min
			1 min 	60 seconds
			*/
			print_int(convert_age_to_sec(age), "You are ", " seconds old.\n");

			bool is_teen = is_teenager(age);
			// if (is_teenager)
			// {
			// 	printf("Yes you are a teenager.\n");
			// }
			// else
			// {	
			// 	printf("No you are not a teenager.\n");
			// }
			print_string(is_teen? "Yes":"No", "If you are a teenager? ", " !\n");

			double height = how_tall();
			print_float(height, "Your height is ", " :)\n");

			//to revise to use boolean, ternary operator
			string isStudent = is_student();
			print_string(isStudent, "And when asked if you're a student you said ", ":( \n");
			
			print_int(VOTING_AGE, "I supposed you know the voting age which is ", " ?\n");
			
			printf("Bye. See you. Next one please.\n");
		}
}



bool there_are_more_groups()
{
	printf("Is there another group?(y/n)\n");
	char more = GetChar();
	return more=='y'? true:false;
}
/*
First C program
*/
int main()
{

	do{
		printf("Hi there!\n");
		
		int num_students = how_many_students();
		print_int(num_students,"Ok, there are ", " of them.\n" );

		process_group(num_students);
		
		printf("Oh, it was the last. Thanks everyone!\n");
		
	}while(there_are_more_groups());

	printf("Thank you! Bye.\n");
}