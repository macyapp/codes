#include<iostream>
using namespace std;

int main()
{
    static int y;
    cout<<y;        // Output is always zero
    return 0;
}