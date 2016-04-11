#include <stdio.h>
/*
Templates:
Count the number of letters in a string.
char s[8] = "asdf123";
countLetters(s) = 4
*/

/*
char[] -> int
Return the count of letters in a given string.
int countLetters(char s[])
{
	return 0;
}
int countLetters(char s[])
{
	int result;
	for (int i = 0; s[i] != '\0'; ++i)
	{
		... s[i]
	}
	return result;
}
*/

int countLetters(char s[])
{
	int result = 0;
	for (int i = 0; s[i] != '\0'; ++i)
	{
		if ((s[i] >= 'a' && s[i] <='z') || (s[i] >= 'A' && s[i] <='Z'))
		{
			result = result + 1;
		}
	}
	return result;
}

int main()
{
	
	//category of inputs: all letters, no letter, some letters
	char s[] = "asdf";
	printf("%d==%d\n", countLetters(s), 4);

	char a[] = "1234";
	printf("%d==%d\n", countLetters(a), 0);	

	char b[] = "asd1234";
	printf("%d==%d\n", countLetters(b), 3);	

	//boundary cases
	char c[] = "a";
	printf("%d==%d\n", countLetters(c), 1);	

	char d[] = "z";
	printf("%d==%d\n", countLetters(d), 1);	

	char e[] = "A";
	printf("%d==%d\n", countLetters(e), 1);	

	char f[] = "Z";
	printf("%d==%d\n", countLetters(f), 1);	

	char g[] = "";
	printf("%d==%d\n", countLetters(g), 0);		

	char h[] = "a";
	printf("%d==%d\n", countLetters(h), 1);	

	char i[] = "Zz";
	printf("%d==%d\n", countLetters(i), 2);	


	//code coverage
	char j[] = "a";
	printf("%d==%d\n", countLetters(j), 1);	

	char k[] = "A";
	printf("%d==%d\n", countLetters(k), 1);	

}

