#include<iostream>
using namespace std;
main()
{
    float height;
    cout<<"Enter the height:";
    cin>>height;
    if(height<150.0)
    cout<<"The person is dwarf.";
    else if((height>=150.0)&&(height<165.0))
    cout<<"The person's height is average.";
    else if((height>=165.0)&&(height<195.0))
    cout<<"The person is tall.";
    else
    cout<<"The person is dwarf";
}