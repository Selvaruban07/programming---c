#include<stdio.h>
void add();
void sub(int,int);
int mul(void);
int div(int,int);
int main()
{
    int res,op1,op2;
    char op;
    while (1) {
    printf("enter operation\n");
    scanf("%c",&op);
    switch(op)
    {
        case'+':add();
        break;
        case'-':
            printf("enter two numbers\n");
            scanf("%d %d",&op1,&op2);
            sub( op1,op2);
            break;
            case'*':res=mul();
            printf("%d\n",res);
            break;
            case'/':
                printf("enter two numbers");
                scanf("%d %d",&op1,&op2);

                res=div(op1,op2);
                printf("res=%d",res);
                break;

        }
    }
        return 0;
}
void add(void)
{
    int res,op1,op2;
    printf("enter two numbers\n");
    scanf("%d%d",&op1,&op2);
    res=op1+op2;
    printf("%d\n",res);

}
int mul(void)
{
    int res,op1,op2;
    printf("enter two numbers\n");
    scanf("%d%d",&op1,&op2);
    res=op1*op2;
    return res;
}
 void sub(int op1,int op2)
 {
     int res;
     res=op1-op2;
     printf("%d\n",res);

 }
int div(int op1,int op2)
{
int res;
    res=op1/op2;
    return res;
}

