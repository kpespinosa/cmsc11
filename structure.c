#include <stdio.h> //directive
/*
typedef struct 
{
	properties here;

} name_of_struct;
*/

typedef struct 
{
	int age;
	char name[40];
	char address[50];
	char sex;//f or m
} Student;

typedef struct
{
	char name[30];
	char program[40];
	int age;
	float salary;
	char number[12];
	char spouse[30];
} Teacher;

typedef struct 
{
	Student ar[30];
	int size;
} Class;

void listStudents(Class c)
{
	for (int i = 0; i < c.size; ++i)
		{
			// Student s = c.ar[i];
			// printf("%s\n", s.name);
			printf("%s\n", c.ar[i].name);
		}	
}

void sayHi(Student s)
{
	printf("Hey guys, my name is %s.\n", s.name);
	printf("I am very young, %d years old.\n", s.age);
	printf("I live somewhere in %s.\n", s.address);
	printf("I am %s.\n", s.sex=='F'? "female":"male");//ternary operator: if condition? then: else
}

void sayHello(Teacher t)
{
	printf("Hello, I am %s.\n", t.name);
	printf("My program is %s.\n", t.program);
	printf("I have lived for %d years in this world.\n", t.age );
	printf("I earn %f everyday.\n", t.salary);
	printf("Contact me at %s.\n", t.number);
	printf("I am married to %s.\n", t.spouse);
}
int main()
{
	Student juvah = {18, "Juvah", "Sitio Bungot", 'M'};
	Student babit = {20, "Babit", "Sitio taboan", 'F'};

	// sayHi(juvah);
	// sayHi(babit);

	
	Teacher madam = {"Madam Faith", "BS CS (shiftee)", 29, 0.50, "09233716760", "neil"};
	Teacher neil = {"Neil", "BS Math", 30, 1000000.50, "09776068260", "madam"};

	// sayHello(madam);
	// sayHello(neil);

	// Student ar[] = ;
	Class cs11 = {{juvah, babit}, 2};
	listStudents(cs11);//will print the names juvah and babit
}




