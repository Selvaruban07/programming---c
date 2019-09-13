//sting concatenate without using string.h
#include<stdio.h>
void stringconcatenate(char*,char*);
int main()
{
    char str1[10], str2[10];
    printf("enter the str1:\n");
    gets(str1);
     printf("enter the str2:\n");
    gets(str2);
   stringconcatenate(str1,str2);



}
    void concatenate(char *s1, char *s2)

    {int i,j;
    i=0;j=0;
    while(s1[i]!=0)
    {
        i++;
    }
      while (s2[j]!=0)
      {
          s1[i]=s2[j];
          j++;
      }
      s1[i]='/0';

   printf("concatenated string is:%s\n",s1);
}
