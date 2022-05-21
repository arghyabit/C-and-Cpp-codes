#include<stdio.h>
void main()
{
    int n,r,i,j,k,l,p;
    float o;

    printf("Enter the value of N & R :");
    scanf("%d%d",&n,&r);

    i=1;
    p=1;
    while(i<=n)
    {
        p=p*i;
        i++;
    }
            //Value of P = N!

    j=(n-r);
    k=1;
    l=1;
    while(k<=j)
    {
        l=l*k;
        k++;
    }
            //Value of L = (N-R)! 

o=p/l;
printf("%dp%d=%4.3f",n,r,o);
}