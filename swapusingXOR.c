//swapping of two numbers using bitwise
#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
printf("a= %d\t b=%d\n",a,b);
a=a^b;
b=b^a;
a=a^b;
printf("a=%d\tb=%d",a,b);
}

