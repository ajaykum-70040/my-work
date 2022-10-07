#include <stdio.h>
int main()
{
	char name[30];
	printf("Enter your name: ");
	scanf("%[^\n]", name);
//	gets(name);			//This function is dangerous
	printf("Good morning! %s", name);
	return 0;
}
