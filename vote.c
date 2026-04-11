#include<stdio.h>
void main()
{
    int age;
    printf("enter the age :/n");
    scanf("%d",&age);
    printf("%d is eligible for voting :%d",age,age>=18);
}