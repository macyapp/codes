#include <iostream>
using namespace std;

struct node
{
    int x;
    node *next;
};

int main()
{
   node *root;
   node *con;
   root=new node;
   root->next=0;
   root->x=12;
   con=root;
   con->next=new node;
   con=con->next;
   con->next=0;
   con->x=42;
   if(con!=0)
   {
      while(con->next!=0)
      {
         cout<<con->x;
         con=con->next; 
      }
      cout<<con->x;
   }
}
