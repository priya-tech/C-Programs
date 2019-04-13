#include<stdio.h>
int main()
{
       int num,i,first=0,second=1,next;
    printf("\n Enter the number you want to get fibanacci series");
     scanf("%d",&num);
     if(num==1)
     printf("%d",first);
     else{
     printf("%d\t%d",first,second);
     for(i=3;i<=num;i++)
     {
         next=first+second;
         printf("\t %d",next);
         first=second;
         second=next;
     }
     }return 0;
}
