
#include<stdio.h>                                                    
int main()
{
    int a[10][12],r,c,i,j;
    printf("Enter row and column:");
    scanf("%d%d",&r,&c);

    printf("Enter values:");
    for(i=0; i<r; i++)
    for(j=0; j<c; j++)
    scanf("%d",&a[i][j]);

    printf("Values are:");
    for(i=0; i<r; i++)
    {
    for(j=0; j<c; j++)
    printf("%d\t",a[i][j]);
    printf("\n");
    }
return 0;
}