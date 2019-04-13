#include<stdio.h>
void main()
{
    int a[10],i,n,j;
    printf("\n Enter the no. of elements");
    scanf("%d",&n);
    printf("\n Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n The Reversed Elements are:");
      for(i=n-1;i>=0;i--)
    {
        printf("%d \t",a[i]);
    }
}
