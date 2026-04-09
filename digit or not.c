#include <stdio.h>
void main ()
{
    char ch;
    printf("enter the charecter:/n");
    scanf("%c",&ch);
    int result=(ch>='0'&&ch<='9');
    printf("the %c is a digit is:%d",ch,result);
}