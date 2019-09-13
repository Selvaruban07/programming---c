#include<stdio.h>
int main()
{
    int num,fact;
    printf("enter a number:\n");
    scanf("%d",&num);
    fact=factorial(num);
    printf("%d!:%d\n",num,fact);

}
int factorial (int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;

    }
    return f;
}
