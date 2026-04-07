#include<iostream>
using namespace std;
int glo=20;
int main()
{
    int a, b;
    cout<<"these are the built-in data types"<<endl;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    cout<<endl;
    cout<<"the sum is "<<(a+b)<<endl;
    cout<<"the diff is "<<(a-b)<<endl;
    cout<<"the mul is "<<(a*b)<<endl;
    cout<<"the div is "<<(float)a/b<<endl;
    cout<<"the modulus is "<<(a%b)<<endl;
    cout<<"enter the value of glo "<<::glo;

    return 0;

    

}