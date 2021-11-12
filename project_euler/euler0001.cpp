#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        unsigned long n, sum=0, _3, _5, _15, three, five, fftn;
        cin>>n;
        n-=1;
        _3=n/3;
        _5=n/5;
        _15=n/15;

        three=3*_3*(_3+1)/2;
        five=5*_5*(_5+1)/2;
        fftn=15*_15*(_15+1)/2;

        sum=three+five-fftn;
        cout<<sum<<'\n';
    }
    
    return 0;
}
