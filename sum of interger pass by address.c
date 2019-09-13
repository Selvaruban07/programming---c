#include<stdio.h>
int sumofints(int*,int);
int main()
{
    int a[5],i,res;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    res=sumofints(a,5);
    printf("res;%d\n",res);
}
int sumofints(int*p,int n)
{
    int i,s=0;
    for(i=0;i<n;i++,p++)
    {
        s=s+*p;
    }
    return s;
}

