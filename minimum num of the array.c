

#include<stdio.h>
int main()
{
    int i,j,min=0, data[5];
    printf("enter the numbers\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &data[i]);

    }
     for(i=0; i<5; i++)
     {
         printf("%d\t",data[i]);

     }
     for(i=0; i<5; i++)
     {
         min=((data[i]<data[i+1])?data[i]:data[i+1]);//finding the smallest of the two number
         data[i+1]=min;//update to next position

     }
     printf("\nthe minimum number is%d",min);

}
