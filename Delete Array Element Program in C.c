#include<stdio.h>
void main()
{
    int array[10],pos,i,x,n;
      printf("\n Enter the no. of elements");
    scanf("%d",&n);
     printf("\n Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n Enter the Delete element in the array");
    scanf("%d",&x);/*element to delete*/
    for(i=0;i<5;i++){
    if(x==array[i])
        pos=i;
    }
    for(i=pos;i<=n-1;i++){
    array[i]=array[i+1];
    }
     printf("\n the array elements are\t");
    for(i=0;i<n-1;i++)
        printf("%d\t",array[i]);
    }


