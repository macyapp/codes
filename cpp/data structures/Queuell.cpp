#include <iostream>
using namespace std;

struct node
{
   int data;
   node* next;
};

class lqueue
{  
private:
   node* front;
   node* rear;
   int count;

public:
   lqueue()
   {
       front = NULL;
       rear = NULL;
       count = 0;
   }      
 
   void ins(int val)
   {
       node* tmp = new node;
       tmp->data = val;
       tmp->next = NULL;

       if (rear==NULL)
       {
           front = rear = tmp;
       }
       else
       {
           rear->next = tmp;
           rear = tmp;
       }

       count++;
       disp();
   }      

   void del()
   {          
       if (front==NULL)
       {
            cout << "Queue Underflow" << endl;
            return;
       }
       int ret = front->data;
       node* tmp = front;
       front = front->next;
       count--;
       delete tmp;
       cout<<ret<<" deleted"<<endl;
       disp();
   }      
 
   void afront()
   {
       cout<<"Front : "<<front->data<<endl;
   }
 
   void size()
   {
       cout<<"Size : "<<count<<endl;
   }
   void disp()
   {
       node *temp=front;
       cout<<"Queue data : ";
       if(front==NULL)
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
       afront();
       cout<<endl;
   }
   ~lqueue()
   {
       while(front!=NULL)
       {
           node *temp=front;
           front=front->next;
           delete temp; 
       }
   }
};

int main()
{
   lqueue q;
   q.ins(1);
   q.ins(3);
   q.ins(5);
   q.ins(7);
   q.del();
   q.del();
   q.del();
   q.del();
   q.del();
}


