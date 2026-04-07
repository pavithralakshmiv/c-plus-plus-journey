#include<iostream>
using namespace std;
int main()
{
    float f= 3.14F;
    long double e= 3.14L;
    cout<<"the value of f is "<<f<<endl;  
    cout<<"the value of e is "<<e<<endl;
    cout<<"the size of 3.14 is "<<sizeof(3.14)<<endl;
    cout<<"the size of 3.14f is "<<sizeof(3.14f)<<endl;
    cout<<"the size of 3.14F is "<<sizeof(3.14F)<<endl;
    cout<<"the size of 3.14l is "<<sizeof(3.14l)<<endl;
    cout<<"the size of 3.14L is "<<sizeof(3.14L)<<endl;
     
    return 0;
}