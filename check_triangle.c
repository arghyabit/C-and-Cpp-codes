#include<stdio.h>
void main()
{
    int a,b,c;
    
    printf("Enter three sides of a triangle:");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b==c)
    printf("Equlateral...");
    else if(a==b!=c || a==c!=b || b==c!=a)
    printf("Isosceles...");
    else if(a!=b!=c)
    printf("Scalene...");
    //else 
    // printf("Plese enter valid lengths of side of the triangle");

}