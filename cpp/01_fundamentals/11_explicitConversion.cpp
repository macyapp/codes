#include<iostream>
using namespace std;

int main()
{
    int x = 15, y = 2;
    double z1 = x/y;
    cout<<z1<<'\n';
    // double z2 = double(x)/y;     C style conversion
    double z2 = static_cast<double>(x)/y;    // C++ style conversion (does a validity check)
    cout<<z2<<'\n';
    return 0;
}