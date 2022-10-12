#include <stdio.h>
#include <string.h>
int main()
{
    char ans[30];
    int i;
    printf("Q. Who is the inventor of C?");
    for (i = 1; i <= 3; i++)
    {
        printf("\nA. ");
        scanf("%[^\n]", ans);
        getchar();                               // dummy getchar
        if (strcmpi(ans, "Dennis Ritchie") == 0) // strcmpi is not the part of standard c library
        {
            printf("Good!");
            break;
        }
        else
        {
            if (i <= 2)
            {
                printf("Try again!");
                continue;
            }

            printf("All your attempts are exhausted. The correct answer is 'Dennis Ritchie'.");
        }
    }
    return 0;
}