#include<iostream>
using namespace std;
#include<math.h>
const float pi=3.1412;

class area_volume
{
float height,length,width,radius,result;
public:
void read_data (float n1 , float n2 , float n3 , float n4)
{
    height=n1;
    length=n2;
    width=n3;
    radius=n4;
}
void calculate(int c)
{
    int cc=c;
    switch (c)
    {
    case 1:
        result= pi*radius*radius;
        break;
    case 2:
        result=pi*1.333333*pow(radius,3);
        break;
    case 3:
        result=length*width;
        break;
    case 4:
        result=height*length*width;
        break;
    default:
        cout<<"Please enter a valid choice (1-4) :"<<endl;
        break;
    }
}
void display (void)
    {
        cout<<"The calculated value is :"<<result;
    }
};
int main()
{
    area_volume av;
    float hh,ll,ww,rr;
    int ch;
    cout<<"Enter the height, length & width of the rectangle & radius of the circle:";
    cin>>hh>>ll>>ww>>rr;
    av.read_data(hh,ll,ww,rr);
    cout<<"Press 1 to calculate area of the CIRCLE..."<<endl;
    cout<<"Press 2 to calculate volume of the CIRCLE..."<<endl;
    cout<<"Press 3 to calculate area of the RECTANGLE..."<<endl;
    cout<<"Press 4 to calculate volume of the RECTANGLE..."<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
    av.calculate(ch);
    av.display();
    return 0;
}