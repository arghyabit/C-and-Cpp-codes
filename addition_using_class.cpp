#include<iostream>
using namespace std;
class addition
{   int sum,num;
    public:
    void read_data(void);
    void calculation(void);
};
//returntype classname :: function name (arguement)
void addition :: read_data (void)
{
    cout<<"Enter a value:"<<endl;
    cin>>num;
}
void addition :: calculation (void)
{
    sum=0;
    for(int i=1; i<=num; i++)
    sum+=i;
    cout<<"The sum of first "<<num<<" number = "<<sum;
}
int main()
{
//  classname a,b,c,d;
addition a;

//object name.function name(arguement)
a.read_data();
a.calculation();
return 0;
} 