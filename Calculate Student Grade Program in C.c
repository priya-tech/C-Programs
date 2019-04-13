#include<stdio.h>
int main()
{
int n,i;
float marks[10],percent,total=0;
printf("Enter number of subject: ");
scanf("%d",&n);/*input the no. of subjects*/
printf("Enter marks of %d subject: ",n);
for(i=0;i<n;i++)/*input for marks of all subjects*/
{
scanf("%f",&marks[i]);
}
for(i=0;i<n;i++)/*calculate total for all subjects*/
{
total=total+marks[i];
}
percent=total/n;/*calculate percentage*/
printf("Percentage: %f % \n",percent);
if(percent>85)
printf("A grade");
else if(percent<85&&percent>=75)
printf("B grade");
else if(percent<75&&percent>=50)
printf("C grade");
else if(percent<50&&percent>=30)
printf("D grade");
else
printf("Fail");
return 0;
}
