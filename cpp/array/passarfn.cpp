#include <iostream>
using namespace std;

void printArray(int ar[], int n)            //Formal parameter in funtion called
{
    for(int i=0; i<n; i++)
    {
        cout <<ar[i]<< endl;
    }
}

int main()
{
    int a[]= {1,2,3,4,5};
    
    printArray(a,sizeof(a)/4);              //Actual parameter in funtion call
}
