#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int num,i;
    printf("Enter the number to give factors ");
    scanf("%d",&num);
    printf("\n The factors of a number %d is  ",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        printf("\t%d",i);
    }
    return 0;
}
