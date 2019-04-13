#include<stdio.h>
int main()
{
    int num,i,f;
    printf("\nEnter the number to check whether it is prime or not ");
    scanf("%d",&num);/*the variable num indicates the given input number to check*/
    for(i=2;i<num;i++){
    if(num%i==0)
    f=1;
    }
    if(f==1)
    printf("\nThe given number is not a prime number ");
    else
      printf("\nThe given number is a prime number ");
}
