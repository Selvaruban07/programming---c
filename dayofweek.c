#include<stdio.h>
int main()
{
    int d;
    short int date;
    printf("enter the date of month 1 to 31\n");

    scanf("%d",&date);
    d=date%7;
    switch(d)
    {
        case 1:printf("sunday\n");
        break;
        case 2:printf("monday\n");
        break;
        case 3:printf("tuesday\n");
        break;
        case 4:printf("wednesday\n");
        break;
        case 5:printf("thursday\n");
        break;
        case 6:printf("friday\n");
        break;
        case 7:printf("saterday\n");
        break;

    }
}
