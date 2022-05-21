#include<stdio.h>
void main()
{
    int num_1,num_2;
    printf("Enter two positive integer value:");
    scanf("%d%d",&num_1,&num_2);
    if(num_1>num_2)
    printf("The first number is maximum.....");
    else if(num_2>num_1)
    printf("The second number is maximum.....");
    else 
    printf("They are equal.....");
    

}