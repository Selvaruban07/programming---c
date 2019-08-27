//finding maximum of two numbers by ternary operator
#include<stdio.h>
int findmax(int,int);//function declaration
int main()
{

    int a,b,res;
    char d;
    do{
    printf("enter the two values\n");
    fflush(stdin);//clear the previous inputs
    scanf("%d %d",&a,&b);
    res=findmax(a,b);//function call
    printf("the maximum value is %d\n ",res);
    printf("do you want to continue:(y/n)\n");
    fflush(stdin);
    scanf("%c",&d);
    }while(d=='y');

}
int findmax(int a,int b)//function definition
{
    int c;
    c=(a>b)?a:b;
    return c;
}
