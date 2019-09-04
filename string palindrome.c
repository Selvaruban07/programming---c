#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    int n,l,h,flag=0;
    scanf("%[^\n]s",str);
    n=strlen(str);
    l=0;
    h=n-1;
    while(h>1)
    {
        if(str[l]!=str[h])
        {
            printf("then string is not a palindrome\n");
            flag=1;
            break;
        }
        l++;
        h--;
    }
    if(flag==0)
    {
        printf("the string is palindrome\n");
    }
}
