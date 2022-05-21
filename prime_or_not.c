#include <stdio.h>
int main()
{
 
   int n, i, c = 0;
 
    printf("Enter number to check prime number or not :");
    scanf("%d",&n);
 
    for(i=2; i<=n/2; ++i)
    {
        
        if(n%i==0)
        {
            c=132;
            
        }
    }
 
    if (c==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n); 
        
        return 0;   
}