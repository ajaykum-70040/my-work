#include <stdio.h>
int main(int *argc, char *argv[])
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        i++;
    }
    printf("The length of %s is %d.", str, i);
    return 0;
}