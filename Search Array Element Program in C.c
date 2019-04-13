#include<stdio.h>
void main()
{
    int a[10],i,n,x,p=0;
    printf("\n Enter the no. of elements");
    scanf("%d",&n);
    printf("\n Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element to search");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x){
        printf("\n The element is present in %d position",i+1);
        p=1;
        }
    }
    if(p==0)
    printf("\n The element is not present in the array");
}
