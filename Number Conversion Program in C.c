#include<stdio.h>
void main()
{
int n,a[20],i=0,j;
printf("Enter any number: ");
scanf("%d",&n);
while(n>0)
{
a[i]=n%2;
i++;
n=n/2;
}
printf("Binary number is: ");
for(j=i-1;j>=0;j--)
   printf(" %d",a[j]);
}

