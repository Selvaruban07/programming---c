//finding string length with out using string.h
#include<stdio.h>
int stringlen(const char*);
main()
{
    char str[10];
    int l;
    printf("enter a string:\n");
    gets(str);
    l=stringlen(str);
    printf("length:%d\n",l);

}
int stringlen(const char*s)
{
    int l=0;
    while(*s!='\0')//this loop work until it find the null
    {
        l++,s++;
    }
    return l;

}

