#include<stdio.h>
float main()
{
    float celcius,farenheit;
    printf("Enter a celcius value:");
    scanf("%f",&celcius);
    farenheit=(9*celcius/5)+32;
    printf("The temparature is {(9*%f/5)+32=%f} farenheit",celcius,farenheit);
    return 0;
}