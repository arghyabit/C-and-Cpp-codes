#include<stdio.h>

float main()
{
    float radius,area;
    printf("Enter the radius of a circle:");
    scanf("%f",&radius);
    area=22/7*radius*radius;
    printf("The area of the circle is : %f",area);
    return 0;
}