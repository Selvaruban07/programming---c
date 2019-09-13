#include<stdio.h>
int main()
{
    int a,b,res1,res2,i;
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    res1=(a>b)?a:b;
    while(1)
    {
        if((res1%a==0)&&(res1%b==0))//for finding LCM
        {
            printf("%d\n",res1);
            break;
        }
        res1++;
    }
    for(i=1;i<=a&&i<=b;i++)//for finding GCD
    {
        if((a%i==0)&&(b&i==0))
        res2=i;
    }
    printf("%d\n",res2);

}
