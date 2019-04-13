#include<stdio.h>
void main()
 {
   int array1[10],array2[10],array3[20],i;
   printf("Enter Elements in the first Array: ");
   for(i=0;i<10;i++)
   scanf("%d",&array1[i]);
   printf("Enter Elements in the second Array: ");
   for(i=0;i<10;i++)
   scanf("%d",&array2[i]);
   printf("\nElements of Array After Merge: ");
   for(i=0;i<10;i++){
    array3[i]=array1[i];
    array3[i+10]=array2[i];
   }
   for(i=0;i<20;i++)
   printf(" %d",array3[i]);
 }
