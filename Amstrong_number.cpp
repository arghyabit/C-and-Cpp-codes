#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int num,dup,temp,c=0,sum=0;
    float r;
    cout<<"Enter the number : ";
    cin>>num;
    temp=num;
    dup=num;
    while (num!=0)
    {
        c++;
        temp=temp/10;
    }
    do
    {
        r=temp%10;
        sum+=(int)pow(r,c);
        temp=temp/10;
    } while (temp!=0);

    if (dup==sum)
    {
        cout<<"Amstrong.";
    }
    else
    cout<<"Not amstrong";

    return 0;
    
}