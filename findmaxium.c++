#include<iostream>
using namespace std;
int main()
{   int n,num;
cout<<"Enter limit";
cin>>n;
while(num<=n)
{   num++;
    if(num%2!=0)
    cout<<"The numbers are:"<<num;
}
return 0;
}