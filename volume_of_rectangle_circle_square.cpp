#include<iostream>
using namespace std;
#include<math.h>
const float pi=3.1415926536;

class volume
{
    float height,length,width;
    double radius;
    int arm;
    
    public:

    float volume_cal (float h, float l, float w)
    {
       height=h;
        length=l;
        width=w;
        return (height*length*width);
    }

    double volume_cal (double r)
    {
        radius=r;
        return (pi*1.3333333333*pow(radius,3));
    }

    int volume_cal (int a)
    {
        arm=a;
        return (pow(arm,3));
    }
};

int main()
{   float hh,ll,ww;
    double rr;
    int aa;
    int ab;
    volume vl;
    cout<<"Size of long = "<<sizeof(long double);
    cout<<"Enter the height, width & length of the rectangle:";
    cin>>hh>>ll>>ww;
    cout<<"The volume of the rectangle is:"<<vl.volume_cal(hh,ll,ww)<<endl;
    cout<<"Enter the radius of the circle:";
    cin>>rr;
    cout<<"The volume of the circle is :"<<vl.volume_cal(rr)<<endl;
    cout<<"Enter the arm of the square:";
    cin>>aa;
    cout<<"The volume of the square is:"<<vl.volume_cal(aa)<<endl;
    return 0;

}
