#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    if(number>0)
    cout<<"It's a positive number.";
    else if(number<0)
    cout<<"It's a negative number.";
    else
    cout<<"It's zero.";
    return 0;
}