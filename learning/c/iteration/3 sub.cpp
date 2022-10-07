#include<stdio.h>
int main()
{
	float m1,m2,m3,tsm,tm,tpos;
	printf("Enter tour marks\n");
	scanf("%f %f %f",&m1,&m2,&m3);
	
	tsm=m1+m2+m3;
	tm=300;
	printf("percentage of student is :");
	tpos=(tsm/tm)*100;
	printf("%f",tpos);
	printf("\nstudent sub percentage sub\n s1 is %f\n s2 id %f\n s3 is %f",m1,m2,m3);
	
	if(tsm>=120)
	{
		if(m1>=33,m2>=33,m3>=33)
		printf("\n pass");
	}
	else 
	printf(" \n fail");
	
	return 0;
}
