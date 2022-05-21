#include<iostream>
using namespace std;
int main()
{
int roll_no,marks_in_physics,marks_in_chemistry,marks_in_computer_application,total,division;
float percentage;
char a[20];
cout<<endl<<"Enter the roll no of the student:  ";
cin>>roll_no;

cout<<"Enter the name of the student:   ";
cin>>a;

cout<<"Enter marks obtained in physics,chemistry&computer application:  ";
cin>>marks_in_physics>>marks_in_chemistry>>marks_in_computer_application;

total=marks_in_physics+marks_in_chemistry+marks_in_computer_application;
percentage=total/3.0;

cout<<"Student name:"<<a<<endl;
cout<<"Roll no:"<<roll_no<<endl;
cout<<"Total marks is:"<<total<<endl;
cout<<"Percentage of number:"<<percentage<<endl;

cout<<"Division:-"<<endl;
if(percentage>=60)
cout<<"The student got first division"<<endl;
else if(percentage<60)
cout<<"The student got second division"<<endl;
else 
cout<<"The sudent got second division"<<endl;

return (0);
}