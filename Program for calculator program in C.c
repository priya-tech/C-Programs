#include<stdio.h>
int main()
{
    int input1,input2,result,m;
    printf("Enter the two operands");
    scanf("%d%d",&input1,&input2);
    printf("Enter 1.Add \n2.Subtract \n3.Multiply \n4.Divide");
    scanf("%d",&m);
    switch(m)
    {
        case 1:result=input1+input2;
        break;
        case 2:result=input1-input2;
        break;
        case 3:result=input1*input2;
        break;
        case 4:result=input1/input2;
        break;
    }
    printf("\n The result of two operands is %d",result);
}
