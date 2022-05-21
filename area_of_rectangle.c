#include<stdio.h>
float main()
{
    float length_of_the_rectangle,width_of_the_rectangle,area;
    printf("\nEnter the length of the rectangle:");
    scanf("%f%f",&length_of_the_rectangle,&width_of_the_rectangle);
    area=length_of_the_rectangle*width_of_the_rectangle;
    printf("The area of the rectangle = %f*%f=%f",length_of_the_rectangle,width_of_the_rectangle,area);
    return(0);
}