#include <iostream>
using namespace std;
#define size 4

class astack
{
    private:
    int data[size];
    int top;
    public:
    astack()
    {
        top = -1;
    }
    void push(int val)
    {
        if (top==size-1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        data[++top] = val;
        disp();
    }
    void pop()
    {
        if ( top == -1 )
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout<<data[top--]<<" deleted"<<endl;
        disp();
    }
    void atop()
    {
        if(top>=0)
            cout<<"Top : "<<data[top]<<endl;
        else
            cout<<"Top : NULL"<<endl;
        
        
    }
    void asize()
    {
        cout<<"Size of stack="<<(top+1)<<endl;
    }
    void disp()
    {
        cout<<"Stack data: ";
        if(top<0)
        {
            cout<<"Empty"<<endl;
            return;
        }
        for(int t=0;t<=top;t++)
        {
            
            cout<<data[t]<<'\t';
        }
        cout<<endl;
        asize();
        atop();
    }
};
int main()
{
    astack s;
    s.disp();
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);
    s.push(9);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
}
