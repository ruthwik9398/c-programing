#include <stdio.h>

int main() {
    char ch;
    printf("enter the value:\n");
    scanf("%c",&ch);
    int result=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    printf("the %cis vowel is %d",ch,result);
}