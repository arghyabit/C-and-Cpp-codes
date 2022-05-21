#include<stdio.h>

int add(int);
int main()
{
    int num,i;
    printf("Enter a value:");
    scanf("%d",&num);
    i=add(num);
    printf("The sum of first %d value %d",num,i);

}
int add(int i)
{
    int a,sum=0;
    for (a=0 ; a<=i ; a++)
    sum = sum+a; //sum+=a;
    return (sum);
}