//finding number of 1s and 0s in the in the given number
#include<stdio.h>
int main()
{
    int data,mask,i,ones=0,zeros=0;
    mask=1;//initializing mask
    printf("enter the data\n");
    scanf("%d",&data);
    for(i=0;i<31;i++)//number of bits to be check
    {
        if((data&mask)!=0)
        {
            ones=ones+1;
        }
        else
        {
            zeros=zeros+1;
        }
        mask=mask<<1;//right shifting the LSB bit of mask by 1

    }
    printf("number of ones : %d\nnumber of zeros : %d",ones,zeros);
}
