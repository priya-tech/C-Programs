#include<stdio.h>
int main()
{
    int i,num;
    printf("\n Enter the number to give table you want");
    scanf("%d",&num);
    for(i=1;i<=16;i++)
    {
        printf("%d * %d = %d\n",i,num,i*num);
    }
}
