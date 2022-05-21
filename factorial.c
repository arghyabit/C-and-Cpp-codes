#include<stdio.h>
int factorial (int);
int main()
{
    int n,i;
    printf("Enter limit : ");
    scanf("%d",&n);
    i=factorial(n);
    printf("Factorial of %d is %d .",n,i);
    return 0;
}
int factorial (int i)
{
    int fact=1,j;
    for(j=1;j<=i;j=j+1)
    {fact*=j;}
    return (fact);
}