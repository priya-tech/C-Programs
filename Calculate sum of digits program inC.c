#include<stdio.h>
int main()
{
    int num,result=0,a,temp;
    printf("Enter the number you want  ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        a=temp%10;
        result=result+a;
        temp=temp/10;
    }
    printf("\n the sum of digits of a number %d is %d",num,result);
    return 0;
}
