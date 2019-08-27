#include<stdio.h>
void add(void);
void sub(int,int);
int mul(void);
int div(int, int);
int main ()
{
    int res, op1, op2,i;
    char op,dec;
    i=1;
    while(i)
    {
    printf("enter operation\n");
    fflush(stdin);
    scanf("%c", &op);
    //calling function
    switch(op)
    {
        case '+': add();
        break;

        case '-':printf("enter two values\n");
        scanf("%d %d", &op1, &op2);
        sub(op1, op2);
        break;

        case '*': res=mul();
        printf("%d\n", res);
        break;

        case '/': printf("enter two values\n");
        scanf("%d %d", &op1, &op2);
        res=div(op1, op2);
        printf("%d\n",res);
    }
    printf("do you want to continue (y/n)\n");
    fflush(stdin);
    scanf("%c",&dec);
    if(dec=='y')
        continue;
    else
        break;

    }

}
//called function
void add(void)
{
    int a,b,c;
    printf("enter two values\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d\n",c);
}
void sub(int a,int b)
{
    int c;
    c=a-b;
    printf("%d\n",c);
}
int mul(void)
{
    int a,b,c;
    printf("enter two values\n");
    scanf("%d %d",&a,&b);
    c=a*b;
    return c;
}
int div(int a,int b)
{
    int c;
    c=a/b;
    return c;
}
