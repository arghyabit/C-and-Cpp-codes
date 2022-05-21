/*C program to check whether a number is divisible by 5 and 11 or not*/
#include<stdio.h>

void main()
{
    int number;
    printf("Enter an integer value:");
    scanf("%d",&number);
    if(number%5==0 && number%11==0)
    printf("The number is divisible by 5 & 11.....");
    else 
    printf("The number is not divisible by 5 & 11.....");
}