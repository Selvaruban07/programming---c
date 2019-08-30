#include<stdio.h>
void bubblesort(int [],int);
int main()
{
    int a[10],n;
    printf("number of variables\n");
    scanf("%d",&n);
    printf("enter your array elements\n");
    bubblesort(a[n],n);
}
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
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
    printf("the sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
