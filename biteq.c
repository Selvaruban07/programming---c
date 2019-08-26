#include<stdio.h>
int main()
{
    int a,mask,i;
    mask=1;
    scanf("%d",&a);
    for(i=0;i<31;i++)
    {
        if(a&mask!=0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        a=a>>1;
    }
}
