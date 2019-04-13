#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the number to check whether it is odd or even  ");
    scanf("%d",&num); /*num indicates the input number to check*/
    if(num%2==0)
    printf("\nThe given number is a even number");
    else
    printf("\nThe given number is a odd number");
}
