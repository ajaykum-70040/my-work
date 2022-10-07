#include <stdio.h>
#include <math.h>
int main()
{
	int n,x,count=0,rem,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	x=n;
	if(x>0)
	{
	  while(x!=0)
	  {
		  x=x/10;
	   	  count++;
	  }
//	  printf("count: %d\n", count);
	  x=n;
	  while(x!=0)
	  {
	  	   rem=x%10;
	  	   sum=sum+pow(rem,count);
	  	   x=x/10;
//	  	   printf("Loop!\n");
	  }
//	  printf("sum: %d\n", sum);
	  if (n==sum)
	  {
	  	printf("Entered number is an armstrong number.");
	  }
	  else
	  {
	  	printf("Entered number is not an armstrong number.");
	  }
    }
	else 
	printf("Enter no. is not valid");  
	
	return 0;
}
