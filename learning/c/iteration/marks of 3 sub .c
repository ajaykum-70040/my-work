#include <stdio.h>
int main()
{
	int m1,m2,m3,tm=300,tp,p1,p2,p3;
	printf("Enter your marks:");
	scanf("%d %d %d",&m1,&m2,&m3);
	
//	passing persentage marks=120
	tp=(m1+m2+m3);
	p1=m1;
	p2=m2;
	p3=m3;
	if(tp>=120)
	{
	   if(m1>=33)
	   if(m2>=33)
	   if(m3>=33)
	printf("pass");
	}
	else 
	{
		printf("fail");
	}
	return 0;
}
