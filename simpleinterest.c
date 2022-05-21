//program:calculating simple interest;
#include<stdio.h>
float main()
{
    float principal,rate,time,si;//si=simple interest
    printf("Enter the value of principal, rate & time::");
    scanf("%f%f%f",&principal,&rate,&time);
    si=(principal*rate*time)/100.0;
    printf("The simple interet is=%f",si);
    return 0;
}