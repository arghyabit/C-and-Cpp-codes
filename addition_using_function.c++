#include<iostream>
using namespace std;

int func(int);
int main()
{
    int number,i;
    cout<<"Enter the value of n:"<<endl;
    cin>>number;
    i=func(number);
    cout<<"The sum of first "<<number<< "\tnumber is :" <<i;
    
}
int func(int i)
{
    int sum=0;
    for ( int loop = 1; loop <= i ; loop++)
    sum=sum+loop;
    return (sum);
    
}