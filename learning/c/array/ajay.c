#include <stdio.h>
int main()
{
    int a[10];
    int i,j;
    printf("enter nnumber: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]<a[j])
        }
    }
}