#include <stdio.h>
int main()
{
	float  d,t,s;
	printf("ENTER DISTANCE IN KM\n");
	scanf("%f",&d);
	printf("ENTER TIME IN HR.\n");
	scanf("%f",&t);
	
	s=d/t;
	printf("%f",s);
	
	return (0);
}
