#include<iostream>
using namespace std;
main()
{
float principal;
float rate;
float time;
float si;

cout<<"Enter the value of principal:";
cin>>principal;

cout<<"Enter the value of rate:";
cin>>rate;

cout<<"Enter time period:";
cin>>time;

si=principal*rate*time/100.0;
cout<<"The simple interst is:"<<si;
}