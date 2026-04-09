#include <stdio.h>

int main() {
    int a;
    printf("enter the value:\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the number is even",a);
    }
    else if(a>0)
    {
        printf("the number is odd",a);
    }
}