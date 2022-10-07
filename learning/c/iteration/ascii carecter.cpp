#include <stdio.h>
int main()
{
	char x;
	printf("Enter a charecter\n:");
	scanf("%c",&x);
	if(x>='A' && x<='Z')
	{
		printf(" Given charecter is upper case");
	}
	else if(x>='a' && x<='z')
	{
		printf("Given charecter is lower case");
	}
	else if (x>='0' && x<='9')
	{
		printf("Given charecter is digit");
	}
	else 
	("given charecter is invalid");
	return 0;
}
