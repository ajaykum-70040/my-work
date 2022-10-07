#include <stdio.h>
int main()
{
	int count[6] = {0, 0, 0, 0, 0, 0};
	int vote, i;
	while(1)
	{
		printf("\n\t\tVoting Program\n\n");
		printf("* 1 through 5 are valid candidate number.\n");
		printf("* For spoilt ballot enter 0.\n");
		printf("* To exit enter -1.\n\n");
		printf("Enter candidate number: ");
		scanf("%d", &vote);
		if(vote == -1)
			break;
		
		if(vote <0 && vote > 5)
			continue;
			
		count[vote]++;
	}
	
	for(i=1; i<6; i++)
	{
		printf("Candidate %d: %d\n", i, count[i]);
	}
	
	printf("Spoilt Ballots: %d", count[0]);
	
	return 0;
}
