#include<stdio.h>
#define Max 15
#define Count 11
int main()
{
    float value[Max];
    int i,low,high;
    int group[Count]={0,0,0,0,0,0,0,0,0,0,0};
    for(i=0;i<Max;i++)
    {
        scanf("%d",&value[i]);
        ++group[(int)(value[i])/10];
    }

    printf("\n");
    printf("Group   Range   Frequency\n\n");
    for(i=0;i<Count;i++)
    {
        low=i*10;
        if(i==10)
            high=100;
        else
            high=low+9;
        printf("%2d    %2d to %3d    %2d\n",i+1,low,high,group[i]);
    }
return 0;
}