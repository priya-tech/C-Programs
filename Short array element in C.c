#include<stdio.h>
void main()
{
    int array[20],smallest,i,n;
    printf("\n Enter the no. of elements");
    scanf("%d",&n);
    printf("\n Enter the no. of elements");
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    smallest=array[0];
    for(i=1;i<n;i++){
    if(array[i]<smallest)
        smallest=array[i];
    }
    printf("\n The smallest element in array is %d",smallest);
    return 0;
}
