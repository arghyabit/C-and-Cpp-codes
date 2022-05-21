#include<iostream>
using namespace std;
void check (void);
int a=20;
int main()
{
    a=a++;
    cout<<a;
    check();
    cout<<a;
}
void check (void)
{   a=100;
    cout<<a;
}