#include<iostream>
using namespace std;

int main()
{
    int a=40, b=5;
    cout<<"the following is the arithmetic operators"<<endl;
    cout<<"the value of a+b is "<<(a+b)<<endl;
    cout<<"the value of a-b is "<<(a-b)<<endl;
    cout<<"the value of a*b is "<<(a*b)<<endl;
    cout<<"the value of a%b is "<<(a%b)<<endl;
    cout<<"the value of a/b is "<<(a/b)<<endl;
    cout<<"the value of a-- is "<<(a--)<<endl;
    cout<<"the value of a++ is "<<(a++)<<endl;
    cout<<"the value of ++a is "<<(++a)<<endl;
    cout<<"the value of --a is "<<(--a)<<endl;
    cout<<endl;

    cout<<"the following is the comparision operators"<<endl;
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<endl;

    cout<<"the following is the logical operators"<<endl;
    cout<<"the value of ((a==b)&(a>b)) logical and operator is "<<((a==b)&(a>b))<<endl;
    cout<<"the value of ((a==b)||(a>b)) logical or operator is "<<((a==b)||(a>b))<<endl;
    cout<<"the value of (!(a==b)) logical not operator is "<<(!(a==b))<<endl;


    
    return 0;
}