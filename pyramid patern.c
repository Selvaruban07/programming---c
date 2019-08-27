#include<stdio.h>
int main()
{
    int i, j,k,l;
    for(i=1; i<=4; i++)//loop for number of rows
    {
        for(j=4; j>i; j--)//loop for space
        {
            printf("\t");
        }
        for(k=1;k<=i;k++)//for printing values
        {
        printf("%d\t",k);
        }
        for(l=i;l>1;l--)
        {
            printf("%d\t",l-1);
        }
        printf("\n");
    }
}


/*
                        1
                1       2       1
        1       2       3       2       1
1       2       3       4       3       2       1

Process returned 0 (0x0)   execution time : 0.018 s
Press any key to continue.
*/
