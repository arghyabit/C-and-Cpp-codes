#include<stdio.h>
int main()
{
    int hour;
    printf("Enter the number of hour");
    scanf("%d",&hour);
    int min=hour*60;
    printf("The value of minute is:%d",min);
    return 0;
}