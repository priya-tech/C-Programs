#include<stdio.h>
void main()
{
    int a[10],i,n,even=0,odd=0;
    printf("\n Enter the no. of elements");
    scanf("%d",&n);
    printf("\n Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("\n no. of even elements : %d",even);
    printf("\n no. of odd elements : %d",odd);
}
