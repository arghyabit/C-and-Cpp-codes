#include<stdio.h>

void main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number==0)
    printf("The number is zero....");
    else if(number>0)
    printf("The number is positive .....");
    else if(number<0)
    printf("The number is negative.....");

}