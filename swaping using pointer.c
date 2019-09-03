//swapping of two number using pointers
#include<stdio.h>
void swap(int* ,int*);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("in main function \na is : %d and B is : %d\n",a,b);
}
void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("in swap function \na is : %d and b is : %d\n",*x,*y);
}
