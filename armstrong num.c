#include<stdio.h>
void arms(void);
int a,original,result=0,remainder;
int main()
{
    arms();

}
void arms(void)
{
    printf("enter the number\n");
    scanf("%d",&a);
    original=a;
    while(a!=0)//loop run until last digit
    {
        remainder=a%10;//get the single digit
        result+=remainder*remainder*remainder;
        a=a/10;//romove the last digit
    }
    printf("%d\n",result);
    if(result==original)
    {
        printf("the number is armstrong");
    }
    else
        printf("not a armstrong number");
}
