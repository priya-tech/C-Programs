#include<stdio.h>
int main()
{
    int count=0,i=0;
    char s[20];/*s[20] indicates the string and ch indicates the character to calculate*/
    char ch;
    printf("\n Enter the string you want ");
    scanf("%s",s);
    printf("\n Enter any character to calculate frequency");
    scanf("%c",&ch);
    while(s[i]!='\0')
    {
        if(s[i]==ch){
        count++;
        }
        i++;
    }
    if(count==0){
    printf("the character is not found");}
    else{
       printf("the character is found %d times",count);}
    return 0;
}


