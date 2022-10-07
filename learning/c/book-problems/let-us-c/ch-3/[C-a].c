#include<stdio.h>
int main()
{
	int i=1,hour,extra;
	printf("Enter the rorking hour of Employ:\n");
	scanf("%d",&hour);
	
	for(i;i<=10;i++)
	{
		if(hour>40)
		{
			extra=(hour-40)*12;
			printf("%d overtime  payment of empoye\n",extra);
		}
		else
		printf("\nthere is No overtime of worked by employ");
	}
	return 0;
}
