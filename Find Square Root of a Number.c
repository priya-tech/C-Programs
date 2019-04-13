#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int num,res;
    printf("Enter the number to check  \n");
    scanf("%d",&num);
    res=pow(num,0.5);
    printf("The square root of a number %d is %d",num,res);
    return 0;
}

