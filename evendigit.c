#include <stdio.h>

int main() {
    int num,digit;
    printf("enter the value of num:\n");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        if(digit%2==0)
        {
            printf("%d",digit);
        }
        num=num/10;
    }
}