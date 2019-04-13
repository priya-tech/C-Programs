#include<stdio.h>
int main()
{
    int x,y; /*the variable x and y indicates input of two numbers to swap*/
    printf("\nEnter the two numbers to swap");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nThe swapping of two numbers are %d and %d",x,y);
}
