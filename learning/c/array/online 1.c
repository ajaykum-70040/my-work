#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    printf("Enter ten number:\n");
    for(i=0;i<=9;i++)
    {
        printf("Enter number %d",i+1);
        scanf("%d",&arr[i]);

    }
    /* printf("number is stored in array");
    for(i=0;i<=9;i++)
    {
        printf("%d",arr[i]);

    }*/
    return 0;
}