/*A C program to input week number and print week day*/
#include<stdio.h>

void main()
{
    int week_number ;
    printf("Enter week number:");
    scanf("%d",&week_number);

    if(week_number==1)
    printf("Sunday...");
    else if(week_number==2)
    printf("monday...");
    else if(week_number==3)
    printf("Tuesday...");
    else if(week_number==4)
    printf("Wednesday...");
    else if(week_number==5)
    printf("Thrusday...");
    else if(week_number==6)
    printf("Friday...");
    else if(week_number==7)
    printf("Saturday...");
    else 
    printf("Please enter a valid week number from 1 - 7");

}