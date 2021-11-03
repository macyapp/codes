#include<iostream>
using namespace std;

const double PI = 3.14;             // value of the variable cannot be changed
// It can be changed using pointers but it's not recommended as it defeats the purpose

int main()
{   int r;
    cout<<"Enter the radius:\n";
    cin>>r;
    cout<<"Area is "<<PI*r*r;
    return 0 ;
}