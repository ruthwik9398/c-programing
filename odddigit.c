#include <stdio.h>

int main() {
    int num,digit,count;
    printf("enter the value of num:\n");
    scanf("%d",&num);
    count=0;
    while(num>0)
    {
        digit=num%10;
        if(digit%2!=0)
        {
            count++;
        }
        num=num/10;
    }
    printf("no of odd digit %d",count);
}