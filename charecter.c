#include <stdio.h>

int main() {
    char ch;
    printf("enter the value:\n");
    scanf("%c",&ch);
    int result=(ch>='0'&&ch<='9');
    printf("the %cis in given range of is %d",ch,result);
}