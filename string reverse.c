#include<stdio.h>
char *stringrev(char *,char *);
int main()
{
    char str1[15],str2[15],*copy;

    printf("enter string\n");
    scanf("%s",str2);
    copy=stringrev(str1,str2);
    printf("the reversed copy of string is %s\n",copy);
}
 char *stringrev(char *s1,char *s2)
{
    int i,j;
    for(j=0;s2[j]!='\0';j++);
    for(i=0;s2[i]!='\0';i++,j--)
    {
        s1[j-1]=s2[i];
    }
    s1[i]='\0';//assigning the last position to null
    return s1;
}

