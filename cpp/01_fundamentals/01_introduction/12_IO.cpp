#include<iostream>
using namespace std;

int main()
{

    // Input
    string name;
    cout << "Please enter your name \n";
    getline(cin,name);
    // cin >> name;    // Wrong approach, try giving full name (it only accepts first word)
    cout << "Hi " << name << ", \n"     // 'endl' flushses the stream while '\n' does'nt. So, latter is faster
         << "Welcome to GfG";
    return 0;
}