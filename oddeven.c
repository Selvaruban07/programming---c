//odd even using bitwise
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a&1)==1)//checking the LSB is 1 or 0
    {
        printf("the number is odd\n");
    }
    else{
        printf("the number is even\n");
    }
}
