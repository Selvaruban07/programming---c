#include<stdio.h>
#include<string.h>
struct car{
char name[12];
int regno;
char type[10];
};
void printcar(struct car);
void initcar(struct car*);
void searchcar(struct car* ,int );
main()
{
    int i,key;
    struct car c[5];
    printf("enter car name and  car regno for 5 cars\n");
    for(i=0;i<5;i++)
    {
        initcar(&c[i]);
        fflush(stdin);
    }
    printf("car  data\n");
    for(i=0;i<5;i++)
    {
    printcar(c[i]);
    }
    printf("rnter the reg no to search\n");
    scanf("%d",&key);
    searchcar(c,key);
}
void initcar(struct car*p)
{
    scanf("%s",p->name);
    scanf("%d",&p->regno);
    scanf("%s",p->type);
}
void printcar(struct car c)
{
    printf("%s\t \t%d %s\n",c.name,c.regno,c.type);
}
void searchcar(struct car*c, int key)
{
    int i, flag=0;
    for(i=0;i<5;i++)
    {
    if(c[i].regno==key)
    {
        flag=1;
        break;
    }
    if(flag==1)
    {
        printf("car is found");
    }
    else
    printf("car not found");
    break;
    }
}
