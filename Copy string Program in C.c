#include<stdio.h>
int main()
{
    int count=0,i=0,j,k;
    char a[20],b[20];/*a[20] indicates the given string and b[20] stored the copied string*/
    printf("\n Enter the string to copy ");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    for(k=0;k<count;k++)
    {
        b[k]=a[k];
    }
    printf("\n The copied string is %s",b);
    return 0;
}
