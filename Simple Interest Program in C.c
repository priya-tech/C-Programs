#include<stdio.h>
int main()
{
    int n;
    float p,r,simple_interest;
    printf("\nEnter the principle,rate of interest and no. of years to calculate");
    scanf("%f%f%d",&p,&r,&n);/*p,r,n indicates principle,rate of interest,no. of years respectively*/
    simple_interest=(p*n*r)/100;
    printf("\n The simple interest is %f",simple_interest);
    return 0;
}
