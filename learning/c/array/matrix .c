
#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("Enter all element of matrix : \n");
	    printf("_     _");
	for(i=0;i<3;i++)
	{
		printf("|     |");
		for(j=0;j<3;j++)
		{
			scanf("%d",a[j]);
		}
		printf("\n");
	}   printf("_     _");
	
	return 0;
}
