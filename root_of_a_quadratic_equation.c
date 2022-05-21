#include<stdio.h>
#include<math.h>
main()
{   float a,b,c,determinant,i,root_1,root_2;
    printf("Enter the value with of a,b&c:");
    scanf("%f%f%f",&a,&b,&c);
    determinant=b*b-4*a*c;
    if (determinant>0)
    {
        root_1=(-b+sqrt(determinant))/(2*a);
        root_2=(-b-sqrt(determinant))/(2*a);
        printf("The roots are %f and %f ",root_1,root_2);
    }
    else if (determinant==0)
    {
        root_1=-b/(2*a);
        printf("The roots are %f and %f",root_1,root_1);
    }
    else if (determinant<0)
    {   root_1=-b/(2*a);
        i = sqrt(-determinant)/(2*a);

        printf("The roots are: %f + i%f and %f - i%f", 
                root_1, i, root_1, i);
        
    }
    return 0; 
}