#include<stdio.h>
int main()
{
    int num,i,sum=1;
    printf("\nEnter the number to give factors");
    scanf("%d",&num);
   for(i=1;i<=num;i++)
   {
       sum=sum*i;
   }
    printf("\n The factorial of a number is %d",sum);
    return 0;
}
