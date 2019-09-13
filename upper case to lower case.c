#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character in upper case\n");
    scanf("%c",&ch);
    ch=ch+32;//converting upper case to lower case
    printf("%c character in lower case\n",ch);
}
//for convert lower case to upper case means subtract the ch by 32
