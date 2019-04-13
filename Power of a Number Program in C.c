#include<stdio.h>
int main()
{
    int x,y,result=1,i;
    printf("Enter the numbers you want ");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++){
    result=result*x;
    }
    printf("The power of %d and %d is %d",x,y,result);
    return 0;
}
