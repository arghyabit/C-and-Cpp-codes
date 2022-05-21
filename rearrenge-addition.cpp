#include<iostream>
using namespace std;
int main()
{
    int num,a,b,c,d,e,f,g,h;
    cout<<endl<<"Enter a four digit number::";
    cin>>num;
    a=num%1000;
    b=num/1000;//1st value
    c=a%100;
    d=a/100;//2nd value
    e=c%10;//4th value
    f=c/10;//3rd value
    g=b+d+e+f;
    h=(e*1000+f*100+d*10+b*1);
    cout<<endl<<"The addition of those numbers::"<<g;
    cout<<endl<<"Reverse of the number is::"<<h;
    cout<<endl<<"Thank You!";
    return 0;
}