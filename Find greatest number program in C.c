#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("\n Enter the three numbers you want");
    scanf("%d%d%d",&num1,&num2,&num3);/*input for three numbers*/
    if(num1>num2)
    printf("%d is big",num1);
    else if(num2>num3)
    printf("%d is big",num2);
    else
    printf("%d is big",num3);
    return 0;
}
