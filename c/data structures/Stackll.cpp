#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
class lstack
{
    private:
    node *top;
    int count;
    public:
    lstack()
    {
        top = NULL;
        count = 0;
    }
    void push(int val)
    {
        node* temp = new node;
        temp->data = val;
        temp->next = top;
        top = temp;
        count++;
        disp();
    }
    void pop()
    {
        if(top==NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        int ret = top->data;
        node *temp = top->next;
        delete top;
        top = temp;
        count--;
        cout<<ret<<" deleted"<<endl;
        disp();
    }
    void atop()
    {
        cout<<"Top : "<<top->data<<endl;
    }
    void size()
    {
        cout<<"Size of stack = "<<count<<endl;
    }
    void disp()
    {
        node *temp=top;
        cout<<"Stack data: ";
        if(temp==NULL)
        {
            cout<<"Empty"<<endl;
            return;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<' ';
            temp=temp->next;
        }
        cout<<endl;
        size();
        atop();
    }
    ~lstack()
    {
        while(top!=NULL)
        {
            node *temp=top;
            top=top->next;
            delete temp; 
        }
    }
};
int main()
{
    lstack s;
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
}
