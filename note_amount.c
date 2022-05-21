#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s;
    printf("\nEnter the amount:");
    scanf("%d",&a);
    b=a/2000;
    printf("\nNote of 2000 :%d",b);
    c=a%2000;
    d=c/500;
    printf("\nNote of 500 :%d",d);
    e=c%500;
    f=e/200;
    printf("\nNote of 200 :%d",f);
    g=e%200;
    h=g/100;
    printf("\nNote of 100 :%d",h);
    i=g%100;
    j=i/50;
    printf("\nNote of 50 :%d",j);
    k=i%50;
    l=k/20;
    printf("\nNote of 20 :%d",l);
    m=k%20;
    n=m/10;
    printf("\nNote of 10:%d",n);
    o=m%10;
    p=o/5;
    printf("\nNote of 5:%d",p);
    q=o%5;
    r=q/2;
    printf("\nNote of 2:%d",r);
    s=q%2;
    printf("\nNote of 1:%d",s);

    return 0;
}