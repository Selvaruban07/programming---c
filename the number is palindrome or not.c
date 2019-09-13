#include<stdio.h>
int main()
{
    int a,original,reverse=0,remainder;
    printf("enter the number\n");
    scanf("%d",&a);
    original=a;
    while(a!=0)
    {
        remainder=a%10;
        reverse= reverse*10 + remainder;
        a=a/10;
    }
    printf("%d",reverse);
    if(reverse==original)
    {
        printf("the number is palindrome\n");
    }
    else
        printf("the number is not a palindrome");
}

