#include<iostream>
using namespace std;
int main()
{
    float temp;
    cout<<"Enter the temperature(celcius) : ";
    cin>>temp;
    if(temp<0)
    cout<<"It's freezing temperature.";
    else if(temp>0 && temp<=10)
    cout<<"It's very cold weather.";
    else if(temp>20 && temp<=30)
    cout<<"It's normal temparature.";
    else if(temp>30 && temp<40)
    cout<<"It's hot weather.";
    else
    cout<<"It's very hot weather.";
    return (0);
}