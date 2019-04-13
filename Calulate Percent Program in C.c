#include<stdio.h>
int main()
{
float total,scored;
float percent;
printf("\n Enter the total marks");
scanf("%f",&total);
printf("\n Enter the scored marks");
scanf("%f",&scored);
percent=(scored/total)*100;
printf("The percentage is %.2f %",percent);
return 0;
}
