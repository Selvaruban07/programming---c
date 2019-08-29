//bubble sort
#include<stdio.h>
int main()
{
    int i,j,a[10],n,temp;
    printf("number of variables\n");
    scanf("%d",&n);
    printf("enter your array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //loop for bubble sort
    for(i=0;i<n-1;i++)//for step
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //printing sorted array
    printf("the sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
