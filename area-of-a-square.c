#include<stdio.h>
#include<math.h>

float main()
{
    float length_of_arm,area;
    printf("Enter the value of arm of the square:");
    scanf("%f",&length_of_arm);
    area=pow(length_of_arm,2);
    printf("The area of the square is:%f",area);
    return (0);

}