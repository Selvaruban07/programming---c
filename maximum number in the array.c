//finding maximum element in the array
#include<stdio.h>
int main()
{
    int i,j,max=0, data[5];
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
         max=((data[i]>data[i+1])?data[i]:data[i+1]);//finding the maximum number
         data[i+1]=max;//update the maximum number to the next position

     }
     printf("\nthe maximum number is%d",max);

}
