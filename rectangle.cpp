#include<iostream>
using namespace std;
main()
{
    cout<<"\nA C++ program to evaluate the area and perimeter of a rectangle:";
    float height;
    float width;
    float area;
    float perimeter;

    cout<<"\nEnter the height of the rectangle:";
    cin>>height;

    cout<<"\nEnter the width of the rectangle:";
    cin>>width;

    area=height*width;
    cout<<"\nThe area of the rectangle is:"<<area;

    perimeter=2*(height+width);
    cout<<"\nThe perimeter of the rectangle is:"<<perimeter;
} 