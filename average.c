#include<stdio.h>
int main()
{
    int n,i,num,sum,rem,avg;
    printf("\nEnter number of quantities:");
    scanf("%d",&n);
    i=1;
    sum=0;

     
    for(i=1;i<=n;)
    {
        rem=num%2;

        if(rem!=0)
        sum=sum+num;
        i=i+1;
        avg=sum/n;
    }
    
    printf("\nThe average is %d",avg);
    return 0;
}