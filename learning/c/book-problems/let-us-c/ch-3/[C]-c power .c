#include<stdio.h>
int main()
{
	int x,y,p=1;
	printf("Enter two number :\n");
	scanf("\n%d \n%d",&x,&y);
	
	for(p=1;y>=1;y--)
	{
		p=p*x;
		//y=y-1;
	}
	printf("%d",p);
	return 0;
}
