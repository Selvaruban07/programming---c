//using functions
#include<stdio.h>
//function declaration
void swap(int,int);
int add(void);
int sub(int ,int);
int main()
{
    int a,b,res,sres,d;
    char c;
    do{
    fflush(stdin);
    scanf("%c",&c);
    printf("enter two values\n");
    fflush(stdin);
    scanf("%d %d",&a,&b);
    switch(c){

    case 's':swap(a,b);//calling swap function
    break;
    case 'a':res=add();//calling add function
    printf("the addition of two values is: %d\n",res);
    break;
    case 'r':sres=sub(a,b);//calling sub function
    printf("the subtraction of two values is : %d\n",sres);
    break;
    }
    printf("do you want to continue(y/n)\n");
    scanf("%c",d);
    }
    while(d=='y');//for continuous run
}
//called functions
//function definition
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n",a,b);
}
int add(void)
{
    int a,b,c;
    printf("enter two values\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
