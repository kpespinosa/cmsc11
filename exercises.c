#include <stdio.h>
#include <stdbool.h>

#define DOMAIN "@up.edu.ph"

char bumpUp(char c);
bool isSorted(int length, float ar[length]);
bool equalsIgnoreCase(char ar1[], char ar2[]);
bool sameCharIgnoreCase(char a, char b);
bool isLetter(char a);
bool isUpper(char a);
char toLower(char a);
int len(char ar[]);
void shiftElements(int len, int ar[len], int value, int index);
bool sameArray(int len1, int ar1[len1], int len2, int ar2[len2]);
int strLength(char ar[]);
void strCopy(char ar1[], char ar2[]);
bool sameString(char ar1[], char ar2[]);
void emailAdd(char first[], char middle[], int len, char last[len], char new[]);
float averageChars(char first[], char middle[], char last[]);

int main()
{

	printf("%.2f == %.2f\n", averageChars("Kurt", "Junshean", "Espinosa"), 6.67);

	// char new[9 + 2 + 11];
	// emailAdd("Kurt", "Pelayo", 9, "Espinosa", new);
	// char res[] = "KPEspinosa@up.edu.ph";
	// printf("%d==%d\n", sameString(new, res), true);

	// char new2[7 + 2 + 11];
	// emailAdd("Juan", "Pable", 9, "Marini", new2);
	// char res2[] = "JPMarini@up.edu.ph";
	// printf("%d==%d\n", sameString(new2, res2), true);

	// int len = 6;
	// char a[] = "Hello";
	// char b[len];
	// strCopy(a, b);
	// printf("%d==%d\n", sameString(a, b), true);
	// char c[] = "Heloo";
	// strCopy(c, b);
	// printf("%d==%d\n", sameString(c, b), true);

	// printf("%d==%d\n", strLength("ABC"), 3);
	// printf("%d==%d\n", strLength(""), 0);

	// int a1[] = {1, 2, 3, 4};
	// int a2[] = {0, 1, 2, 3};
	// shiftElements(4, a1, 0, 0);
	// printf("%d==%d\n", sameArray(4, a1, 4, a2), true);
	// int b1[] = {};
	// int b2[] = {0, 1, 2, 3};
	// shiftElements(0, b1, 0, 0);
	// printf("%d==%d\n", sameArray(0, b1, 4, b2), false);
	// int c1[] = {1, 2, 3, 4};
	// int c2[] = {1, 2, 3, 0};
	// shiftElements(4, c1, 0, 3);
	// printf("%d==%d\n", sameArray(4, c1, 4, c2), true);
	// int d1[] = {1, 2, 3, 4};
	// int d2[] = {1, 0, 2, 3};
	// shiftElements(4, d1, 0, 1);
	// printf("%d==%d\n", sameArray(4, d1, 4, d2), true);
	
	// char a1[] = "Abc";
	// char a2[] = "aBC";
	// char b1[] = "Temp";
	// char b2[] = "Hello";
	// printf("%d==%d\n", equalsIgnoreCase(a1, a2), true);
	// printf("%d==%d\n", equalsIgnoreCase(b1, b2), false);
	// printf("%c==%c\n", toLower('a'), 'a');
	// printf("%c==%c\n", toLower('A'), 'a');
	// printf("%d==%d\n", isUpper('a'), false);
	// printf("%d==%d\n", isUpper('A'), true);
	// printf("%d==%d\n", isLetter('a'), true);
	// printf("%d==%d\n", isLetter(')'), false);
	// printf("%d==%d\n", sameCharIgnoreCase('a', 'A'), true);
	// printf("%d==%d\n", sameCharIgnoreCase('b', 'A'), false);
	// printf("%d==%d\n", len(a1), len(a2));
	// printf("%d==%d\n", len(b1), len(b2));

	// float ar[] = {1.0,1.1,3.2,4.5};
	// float ar2[] = {1.0,1.1,3.2,4.5, 3.0};
	// printf("%d==%d\n", isSorted(4, ar), true);
	// printf("%d==%d\n", isSorted(5, ar2), false);

	// printf("%c==%c\n",  bumpUp('A'), 'A');
	// printf("%c==%c\n",  bumpUp('F'), 'E');
	// printf("%c==%c\n",  bumpUp('M'), 'M');
	// printf("%c==%c\n",  bumpUp('D'), 'C');
}
float averageChars(char first[], char middle[], char last[])
{
	return (strLength(first) + strLength(middle) + strLength(last)) / 3.0;
}

void emailAdd(char first[], char middle[], int len, char last[len], char new[])
{
	new[0] = first[0];
	new[1] = middle[0];
	for (int i = 0; i < len; ++i)
	{
		new[i + 2] = last[i];
	}
	char dom[] = DOMAIN;
	int domainLen = strLength(DOMAIN);
	for (int i = 0; i < domainLen; ++i)
	{
		new[i + len + 2] = dom[i];
	}
}

bool sameString(char ar1[], char ar2[])
{
	for (int i = 0; ar1[i] != '\0'; ++i)
	{
		if ( !(ar1[i] == ar2[i] ))
		{
			return false;
		}
	}
	return true;
}

void strCopy(char ar1[], char ar2[])
{
	for (int i = 0; ar1[i] != '\0'; ++i)
	{
		ar2[i] = ar1[i];
	}
}

int strLength(char ar[])
{
	int ctr = 0;
	for (int i = 0; ar[i] != '\0'; i++)
	{
		ctr++;
	}
	return ctr;
}
bool sameArray(int len1, int ar1[len1], int len2, int ar2[len2])
{
	if (len1 != len2)
	{
		return false;
	}
	for (int i = 0; i < len1; ++i)
	{
		if (ar1[i] != ar2[i])
		{
			return false;
		}
	}
	return true;
}

void shiftElements(int len, int ar[len], int value, int index)
{
	for (int i = len - 1; i > index; i--)
	{
		ar[i] = ar[i - 1];
	}
	ar[index] = value;
}


char toLower(char a)
{
	char lower = a;
	if (a < 'a')
		lower = a + ('a' - 'A');
	return lower;
}

bool isUpper(char a)
{
	return a >= 'A' && a <= 'Z';
}

bool isLetter(char a)
{
	return (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z');
}



bool sameCharIgnoreCase(char a, char b)
{
	bool isSame = false;
	if (isLetter(a) && isLetter(b))
	{
		if (isUpper(a))
		{
			a = toLower(a);
		}
		if (isUpper(b))
		{	
			b = toLower(b);
		}
		if (a == b)
		{
			isSame = true;
		}
		else
		{
			isSame = false;
		}
	}
	else
	{
		isSame = a == b;
	}
	return isSame;
}

int len(char ar[])
{
	int ctr = 0;
	for (int i = 0; ar[i] != '\0'; i++)
	{
		ctr++;
	}
	return ctr;
}

bool equalsIgnoreCase(char ar1[], char ar2[])
{
	if (len(ar1) != len(ar2))
	{
		return false;
	}
	else
	{
		for (int i = 0; ar1[i] != '\0'; ++i)
		{
			if (!sameCharIgnoreCase(ar1[i], ar2[i]))
			{
				return false;
			}
		}	
	}
	return true;
	
}

char bumpUp(char c)
{
	char res = c;
	if (c > 'A' && c <= 'F')	
	{
		res = c - 1;
	}
	return res;
}

bool isSorted(int length, float ar[length])
{
	for (int i = 0; i < length - 1; ++i)
	{
		if (ar[i] > ar[i + 1])
		{
			return false;
		}
	}
	return true;
}