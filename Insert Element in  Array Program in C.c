#include<stdio.h>
void main()
{
    int pos,i,x;
    int array[]={2,3,5,6,7};
    printf("\nThe array elements are : ");
  for(i=0;i<5;i++)
   printf(" %d",array[i]);

    printf("\nEnter position number: ");
  scanf("%d",&pos);
   printf("\n Insert the number");
  scanf("%d",&x);  /*x indicates the array element*/
  if(pos>5)
  printf("\nThis is out of range");
  else{
  for(i=4;i>=pos-1;i--)
  {
  array[i+1]=array[i];
  }
  array[pos-1]=x;
  printf("\n After insert new elements the array elements are : ");
  for(i=0;i<6;i++)
   printf(" %d",array[i]);
}
}
