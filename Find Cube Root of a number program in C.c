#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int num,res;
    printf("Enter the number to check  ");
    scanf("%d",&num);
    res=pow(num,1.0/3.0);
    res=res+1;
    printf("The square root of a number %d is %d",num,res);
    return 0;
}


