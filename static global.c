//implementation of static variable in c
#include<stdio.h>
void fun(void);
void add(void);
static int a=2;

int main()
{
    int i;
    for(i=0; i<5; i++)
    {
     fun();
     add();
    }
}
void fun(void)
         {
           int b=4;
           printf("%d %d\n", a, b);
           a++;
           b++;
         }
void add(void)
         {
           int b=5;
           printf("%d %d\n",a,b);
           b++; a++;
         }
