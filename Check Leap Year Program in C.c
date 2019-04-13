#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year to check  ");
    scanf("%d",&year);
    if(year%4==0)
    printf("\n The given year is leap year");
    else
    printf("\n The given year is not a leap year");

}
