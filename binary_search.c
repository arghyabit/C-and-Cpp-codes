#include<stdio.h>
int main()
{
    int i,a[20],search,f,m,l,n,flag=0;
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter a number to search :");
    scanf("%d",&search);
    f=0;l=n-1;m=(f+l)/2;
    while (f<=l)
    {
        if (a[m]<search)
        {
            f=m+1;
        }
        else if (a[m]==search)
        {
            printf("Item found in %d loation ...\n",m+1);
            break;
        }
        else
        l=m-1;
        m=(f+l)/2;
    }
    if(f>l)
    printf("Item not found...");

return 0;    
}