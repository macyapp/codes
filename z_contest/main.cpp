#include<iostream>
using namespace std;
// typedef long long ll;

int main() {
    freopen("input.txt","r",stdin);
    int t,x,y;
    cin>>t;
    while(t--) {
        cin>>x;
        for(y=0;;y++) {
            if((x&y)>0 && (x^y)>0) {
                cout<<y<<"\n";
                break;
            }
        }
    }
    return 0;
}