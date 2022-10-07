#include <stdio.h>
#include <string.h>
int main()
{
    char ans[30];
    printf("Q. Who is the inventor of C?");
    printf("\nA. ");
    scanf("%[^\n]", ans);
    if(strcmpi(ans, "Dennis Ritchie") == 0)     //strcmpi is not the part of standard c library
    {
        printf("Good!");
    }
    else
    {
        printf("Try again!");
    }
    return 0;
}