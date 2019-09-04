#include<stdio.h>
#include<string.h>
int main()
{
    char a[500];
    int i,character=0,l;
    printf("enter the sentence you want\n");
    scanf("%[^\n]s",a);//this will scan until the new line is appeared
    l=strlen(a);
    for(i=0;i<=l-1;i++)
    {
        if(a[i]!='\0')
        {
            character=character+1;
        }
    }
    printf("the number of character in the sentence is %d\n",character);
}
