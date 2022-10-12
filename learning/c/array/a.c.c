#include <stdio.h>
int main()		//O(n^2)
{
	int arr[10], i, j, t;
	printf("Enter 10 integers below:\n");	//O(1)
	
	for(i=0; i<10; i++)			//O(n)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Sorting...\n\n");
	
	for(i=0; i<=8; i++)		//O(n^2)
	{
		for(j=i+1; j<=9; j++)
		{
			if(arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	
	printf("Finished sorting!\n\n");
	printf("The sorted array is:\n");
	for(i=0; i<10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}