#include<stdio.h>
void main()
{
    char c;
    printf("\n Enter the character you want");
    scanf("%c",&c);
    if(islower(c))
    printf("\nIt is small letter-lower case");
     else if(isupper(c))
    printf("\nIt is capital letter-upper case");
    else if(isdigit(c))
    printf("\nIt is a number");
    else
    printf("\n It is a special character");
}
