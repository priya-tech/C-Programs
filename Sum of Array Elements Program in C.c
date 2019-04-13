#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],i,n,j;
    printf("\n Enter the no. of elements");
    scanf("%d",&n);
    printf("\n Enter the first array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("\n Enter the second array elements");
     for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\n The Added elements in the array are :");
     for(i=0;i<n;i++)
    {
        printf("%d \t",c[i]);
    }
}
