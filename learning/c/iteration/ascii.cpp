#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number");
	scanf("%d",&x);
	if(x>=65 && x<=90)
	{
		printf("given character uppercase");
	}
    else if (x>=97 && x<=122)
	{
		printf("given charecter is lower case");
	}
	else if (x>=48 && x<=57)
	{
		printf("given charecter is digit");
	}
	else
	{
		printf("given charecter is invalid");
	}
	return 0;
}
