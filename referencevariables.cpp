#include<iostream>
using namespace std;
int main()
{
    float x=455;
    float &y=x;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<endl;

    int a=57;
    float b=63.17;
    int c = int(b);;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<<float(a)<<endl;
    cout<<"the value of b is "<<int(b)<<endl;
    cout<<"the value of b is "<<(int)b<<endl;

    cout<<"the expression is "<<a+b<<endl;
    cout<<"the expression is "<< a + int(b) <<endl;
    cout<<"the expression is "<< a + (int)b <<endl;
    
    return 0;

    
}