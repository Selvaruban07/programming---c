//sting comparison without using string.h
#include<stdio.h>
int stringcompare(const char*, const char*);
int main()
{
    char str1[10], str2[10];
    int r;
    printf("enter the str1:\n");
    gets(str1);
    printf("enter the str2:\n");
    gets(str2);
    r=stringcompare(str1,str2);
    if (r==0)
    {
        printf("string are equal:%d\n",r);
    }
    else
    {
        printf("string are not equal:%d\n",r);
    }
    }
    int stringcompare(const char *s1, const char *s2)
    {
        while(*s1!='/0'&&*s2!='/0')
        {
            if(*s1-*s2!=0)//if the char are not equal send 1
            {
                break;
            }
            s1++,s2++;
        }
        return *s1-*s2;//if strings are equal,return 0

    }

