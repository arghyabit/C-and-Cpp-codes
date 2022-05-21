#include<stdio.h>

void main()

{
    int a,b,c;
    printf("Enter three positive integer value to find the maximum between them::");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("The first number is the maximum value.....");
    else if(b>a && b>c)
    printf("The second number is the maximum value.....");
    else if(c>a && c>b)
    printf("The third number is the maximum value.....");
    else
    printf("All numbers are equal.....");
}  