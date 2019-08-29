//finding lcm and hcf of two numbers
#include<stdio.h>
int hcfo(void);
int a,b,x,y,t,lcm,hcf,res;
int main()
{
    res=hcfo();
    lcm=(x*y)/res;//for LCM
    printf("hcf : %d\n",res);
    printf("lcf : %d\n",lcm);
}
int hcfo(void)
{
    printf("enter two numbers\n");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    while(b!=0)//finding HCF
    {
        t=b;
        b=a%b;
        a=t;
    }
    hcf=a;
    return hcf;
}
