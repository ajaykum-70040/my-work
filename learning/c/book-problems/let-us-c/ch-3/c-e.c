#include <stdio.h>
int main()
{
	int t, s, d, l, i, j, p;
	printf("Armstrong numbers between 1 to 500 are:\n");
	for(i=1; i<=500; i++)
	{
		l=0;                // length = l
		s=0;                // sum = s
		t = i;              //temprary = t
		
		while(t>0)			// finding the length
		{
			t /= 10;
			l++;
		}
//		printf("len: %d\n", l);
		t = i;
		while(t>0)
		{
			p=1;
			d = t % 10;
//			printf("digit: %d\n", d);
			for(j=1; j<=l; j++)
			{
				p *= d;
			}
//			printf("power: %d\n, ", p);
			s += p;
			t /= 10;
		}
//		printf("sum: %d\n", s);
		if(i == s)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
