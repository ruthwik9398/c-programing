int main() {
    char ch;
    printf("enter the value:\n");
    scanf("%c",&ch);
    int result=(ch>='A')&&(ch>='Z');
    printf("the %dis in the range of A-Z is %d",ch,result);
}