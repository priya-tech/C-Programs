#include<stdio.h>
int main()
{
     int num,count=0;
    printf("\n Enter the number you want");
     scanf("%d",&num);
     while(num!=0)
     {
         num=num/10;
         count++;
     }
     printf("\n The number of digits in a program is %d",count);
     return 0;
}
