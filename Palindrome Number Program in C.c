#include<stdio.h>
int main()
{
    int num,temp,a,rev=0;
     printf("\n Enter the number to check");
    scanf("%d",&num);/*input for the number to check*/
    temp=num;
    while(temp!=0)
    {
        a=temp%10;
        rev=rev*10;
        rev=rev+a;
        temp=temp/10;
    }
    if(num==rev)
    printf("\n The given number is palindrome");
    else
    printf("\n The given number is not a palindrome");
}
