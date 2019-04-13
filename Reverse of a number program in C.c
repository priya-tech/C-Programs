#include<stdio.h>
int main()
{
     int i,num,a,sum=0;
    printf("\n Enter the number to reverse you want");
     scanf("%d",&num);
     int temp=num;
    while(temp!=0)
    {
        sum=sum*10;
        a=temp%10;
        sum=sum+a;
        temp=temp/10;
    }
    printf("\n The reverse of a number is %d",sum);
    return 0;
}
