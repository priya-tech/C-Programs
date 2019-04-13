#include<stdio.h>
int main()
{
float celcius,fahrenheit;
printf("\nEnter the Celcius value to change Fahrenheit");
scanf("%f",&fahrenheit);
celcius=(fahrenheit-32)*5/9;
printf("\n The fahrenheit value is %.2f",celcius);
return 0;
}

