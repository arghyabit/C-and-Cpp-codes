#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer value:");
    scanf("%d",&n);
    int rev=0,rem=0;
    for(; n!=0; n=n/10)
    {   
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("The reverse of %d is : %d",n,rev);

return 0;
}