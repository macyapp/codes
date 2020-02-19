#include<iostream>
using namespace std;
class node
{
    friend class linked;
    private:
    int data;
    public:
    node *link;
    node()
    {
        data=0;
        link=NULL;
    }
};
class linked
{
    public:
    node *start=NULL;
    node *ptr;
    node *temp=NULL;
    void append(int item);
    void traverse();
};
void linked::append(int item)
{
    ptr = new node();
    ptr->data=item;
    if(start==NULL)
    {
        start=ptr;
        ptr->link=NULL;
        temp=start;
    }
    else
    {
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=ptr;
        ptr->link=NULL;
    }
}
void linked::traverse()
{
    node *trav=start;
    while(trav!=NULL)
    {
        cout<<trav->data<<"-->";
        trav=trav->link;
        if(trav==NULL)
        {
            cout<<"NULL";
        }
    }
}
int main()
{
    int i;
    linked box;
    for(i=0;i<10;i++)
    {
        box.append(i);
    }
    box.traverse();
}
