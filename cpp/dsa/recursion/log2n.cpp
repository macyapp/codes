#include<iostream>
using namespace std;

int fun(int n) {
    if(n==0)
        return 0;
    return 1+fun(n/2);
}

int main() {
    int num;
    cin>>num;

    cout<<"log2n("<<num<<") = "<<fun(num);
    return 0;
}