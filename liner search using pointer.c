#include<stdio.h>
int linearsearch(int*,int);
int main()
{
    int a[5]={10,20,30,40,50},b,res;
    printf("enter the key\n");
    scanf("%d",&b);
    res=linearsearch(a,b);
    if(res==1)
    {
        printf("key not found in the array\n");
    }
}
int linearsearch(int *p,int k)
{
    int i,flag=1;
    for(i=0;i<5;i++)
    {
        if(*(p+i)==k)
        {
            printf("%d the key found at position %d\n",k,p+i);
            flag=0;
            break;
        }
}
    return flag;
}
