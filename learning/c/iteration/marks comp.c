#include<stdio.h>
int main()
{
	int phy,che,math,bio,comp,fm=500,tsm;//tms is total student marks gain by the student
	float posm;
	printf("Enter your marks of all five subject\n");
	scanf("%d \n%d \n%d \n%d \n%d",&phy,&che,&math,&bio,&comp);
	tsm=phy+che+math+bio+comp;
	posm=tsm/5;
	printf("percentage of total marks of student %f \n:",posm);
	
	if(posm>=90 && posm<=100)
	{
		printf("Grade A");
	}
	else if(posm>=80 && posm<90)
	{
		printf("Grade B");
	}
	else if (posm>=70 && posm<80)
	{
		printf("Grade C");
	}
	else if (posm>=60 && posm<70)
	{
		printf("Grade D");
	}
	else if (posm>=40 && posm<60)
	{
		printf("Grade E");
	}
	else if (posm<40)
	{
		printf("Grade F");
	}
	
	else
	{
		printf("invalid marks");
	}
	return 0;
}
