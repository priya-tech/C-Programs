#include<stdio.h>
int main()
{
     int num,temp,temp1,a,i,sum,result=0,count=0;
    printf("\n Enter the number you want to get amstrong number");
     scanf("%d",&num);
     temp=num;
     temp1=num;
     while(temp1!=0)/*loop to count the number of digits*/
     {
     temp1=temp1/10;
     count++;
     }
     while(temp!=0)/*loop to find the result*/
     {
         sum=1;
         a=temp%10;
         for(i=1;i<=count;i++){/*loop to multiply the seperate digit with count*/
         sum=sum*a;
         }
         result=result+sum;
         temp=temp/10;
     }
     if(num==result)/*loop to check the result with given number*/
     printf("\n The given number is a amstrong number");
     else
     printf("\n The given number is not a amstrong number");
    return 0;
}
