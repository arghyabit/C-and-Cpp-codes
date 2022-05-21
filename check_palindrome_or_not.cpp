#include<iostream>
using namespace std;
#include<string.h>

class palindrome
{
    char a[20];
    public:
    
    void readdata()
    {
        cout<<"Enter a string to check palindrome or not : ";
        cin>>a;
    }
    void display()
    {
        cout<<"Entered string is:"<<a<<endl; 
        cout<<"String in reverse:"<<strrev(a)<<endl;
    }
    void check()
    {
        if(a==strrev(a))
        cout<<"Palindrome."<<endl;
    else
        cout<<"Not palindrome."<<endl;
    }
    
};
int main()
{
    palindrome pali;
    pali.readdata();
    pali.display();
    pali.check();
    char c[20];
    cout<<"reverse="<<strrev(c)<<"\t"<<c<<endl;
    
return 0;
}