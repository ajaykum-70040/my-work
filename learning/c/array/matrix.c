/*
	WAP to accept elements of a 3 X 3 matrix and display it in the following form
	
	1	2	3
	4	5	6
	7	8	9
	
*/
#include <stdio.h>
int main()
{
	int matrix[3][3], i, j;
	printf("Enter the elements of 3 X 3 matrix below:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("The required matrix is:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
