#include<stdio.h>
int main()
{
    int count=0,i;
    char s[20];/*s[20] indicates the string to calculate*/
    printf("\n Enter the string to calculate string length ");
    scanf("%s",s);
    i=0;
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    printf("\n The lenght of a string is %d",count);
    return 0;
}

