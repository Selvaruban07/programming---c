#include<stdio.h>
char* stringcat(char *,char *);
int main()
{
    //int l;
    char str1[15],str2[15],*concatenate[15];
    printf("enter string 1\n");
    scanf("%s",str1);
    printf("enter string 2\n");
    scanf("%s",str2);
    //printf("how many char want to concatenate\n");
    //scanf("%d",&l);
    *concatenate=stringcat(str1,str2);
    printf("the concatenated string is %s\n",*concatenate);
}
 char* stringcat(char *s1,char *s2)
{
    int i,j;
    for(j=0;s1[j]!='\0';j++);
    for(i=0;s2[i]!='\0';i++,j++)
    {
        s1[j]=s2[i];
        //s1[j]++;
        //s2[i]++;
    }
    s1[j]='\0';
    return s1;
}

