#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the value of x,y:"<<endl;
    cin>>x>>y;
    if(x>0 && y>0)
    cout<<"XY is in 1st quadrant";
    else if(x<0 && y>0)
    cout<<"XY is in 2nd quadrant";
    else if(x>0 && y<0)
    cout<<"XY is in 3rd quadrant";
    else if(x<0 && y<0)
    cout<<"XY is in 4th quadrant";
    else 
    cout<<"It is in the middle point of XY quadrant";
    return 0;
}