#include<stdio.h>
void main()
{
    int i,range;
    printf("\n Enter the range you want");
    scanf("%d",&range);
    for(i=1;i<=range;i++)
    {
        if((i%3==0)&&(i%5==0))
        printf("\nFizzBuzz");
        else if(i%3==0)
        printf("\nFizz");
        else if(i%5==0)
        printf("\nBuzz");
        else
        printf("\n%d",i);
    }
    return 0;
}
