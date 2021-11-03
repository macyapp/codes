#include<iostream>
using namespace std ;

int main()
{
    auto a = 5;
    auto b = 10.5;
    cout<<a<<' '<<b<<'\n';
    cout<<typeid(a).name()<<' '<<typeid(b).name()<<'\n';
    return 0 ;
}