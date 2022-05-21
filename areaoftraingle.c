//program:calculate the area of a triangle;
#include<stdio.h>
#include<math.h>
float main()
{
    float area,s,a,b,c;
    printf("Enter the value of three arms of a triangle::");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is:%f",area);
    return 0;
}