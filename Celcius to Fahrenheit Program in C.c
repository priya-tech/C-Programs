#include<stdio.h>
int main()
{
float celcius,fahrenheit;
printf("\nEnter the Celcius value to change Fahrenheit");
scanf("%f",&celcius);
fahrenheit=celcius*9/5+32;
printf("\n The fahrenheit value is %.2f",fahrenheit);
return 0;
}
