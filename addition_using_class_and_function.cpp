#include<iostream>
using namespace std;

class addition
{   private:
    

    public:
    int num1,num2;
    float num3,num4;
    int num5,num6,num7;
    
    int value_add (int a, int b)
    {
      num1=a;
      num2=b;
      return(num1+num2);   
    }
    float value_add (float c,float d)
    {
        num3=c;
        num4=d;
        return (num3+num4);
    }
    int value_add(int e,int f,int g)
    {
        num5=e;
        num6=f;
        num7=g;
        return (num5+num6+num7);
    }
    void calculate (int s)
    {    int cc=s;
        switch(cc)
        {   case 1:
            {
            int aa,bb;
            cout<<"Enter two integer value:";
            cin>>aa>>bb;
            cout<<"Sum="<<value_add(aa,bb);
            }
            break;
    
            case 2:
            {
            float cc,dd;
            cout<<"Enter two float value:";
            cin>>cc>>dd;
            cout<<"Sum="<<value_add(cc,dd);
            }
            break;
            case 3:
            {
            int ee,ff,gg;
            cout<<"Enter three integer value:";
            cin>>ee>>ff>>gg;
            cout<<"Sum="<<value_add(ee,ff,gg);
            }
            break;
            default:
            cout<<"Plesae enter a valid choice (1-3):";
        }
   } 
    
};
int main()
{
    addition sum;
    int ch;
    cout<<"Press 1 to add two integer values:"<<endl;
    cout<<"Press 2 to add two float values:"<<endl;
    cout<<"Press 3 to add three integer values:"<<endl;
    cout<<"Please enter your choice:"<<endl;
    cin>>ch;
    sum.calculate(ch);
    return 0;
}