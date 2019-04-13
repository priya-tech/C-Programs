#include<stdio.h>
int main()
{
    int count=0,i=0,j,k;
    char s[20],rev[20];/*s[20] indicates the string to reverse and rev[20] stored the reversed string*/
    printf("\n Enter the string to reverse ");
    scanf("%s",s);
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    for(k=count-1,j=0;k>=0;k--,j++)
    {
        rev[j]=s[k];
    }
    printf("\n The reverse of a given string is %s",rev);
    return 0;
}
