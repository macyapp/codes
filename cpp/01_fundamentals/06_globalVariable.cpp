#include<iostream>
using namespace std ;

extern int x;   // Creating external linkage so that x can be initialized later
int y;
int main() {
    int y=2;
    {
        int y=3;
        cout<<' '<<y<<' ';
    }
    cout<<x<<' ';
    return 0 ;
}
int x=5;    // x is initialized after using it