#include<stdio.h>
void main()
{
    int i=1;
    print(i);
}
void print(int i)
{
    printf("%d\n",i);
    i++;
    if(i<=10){
    print(i);
    }
}
