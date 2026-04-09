#include <stdio.h>

int main() {
    int a;
    printf("enter the value:\n");
    scanf("%d",&a);
    if(a==0)
    {
        printf("the number is equal to zeor",a);
    }
    else if(a>0)
    {
        printf("the number is positive",a);
    }
    else
    {
        printf("the given number is nagative",a);
    }
}