#include <iostream>
using namespace std;
// Node class

class Node
{
int data;
Node* next;
public:
Node() {}
void SetData(int aData) 
{ 
data = aData; 
}
void SetNext(Node* aNext) 
{ 
next = aNext; 
}
int Data() 
{ 
return data; 
}
Node* Next() 
{ 
return next;
}
};

// List class
class List
{
Node *head;
public:
List() 
{ 
head = NULL; 
}
void Print();
void Append(int data);
void Delete(int data);
};

/** * Print the contents of the list */
void List::Print()
{
// Temp pointer
Node *tmp = head;
// No nodes
if ( tmp == NULL )
{
cout << "EMPTY" << endl;
return;
}
// One node in the list
if ( tmp->Next() == NULL )
{
cout << tmp->Data();
cout << " --> ";
cout << "NULL" << endl;
}
else
{
// Parse and print the list
do
{ 
cout << tmp->Data(); 
cout << " --> "; 
tmp = tmp->Next(); 
} 
while ( tmp != NULL ); 
cout << "NULL" << endl; 
} 
} 

/** * Append a node to the linked list */ 
void List::Append(int data) 
{ 
// Create a new node 
Node* newNode = new Node(); 
newNode->SetData(data); 
newNode->SetNext(NULL); 
// Create a temp pointer 
Node *tmp = head; 
if ( tmp != NULL ) 
{ 
// Nodes already present in the list 
// Parse to end of list 
while ( tmp->Next() != NULL ) 
{ 
tmp = tmp->Next(); 
} 
// Point the last node to the new node 
tmp->SetNext(newNode); 
} 
else 
{ 
// First node in the list 
head = newNode; 
} 
}

 /** * Delete a node from the list */ 
void List::Delete(int data) 
{ 
 // Create a temp pointer 
 Node *tmp = head; 
 // No nodes 
 if ( tmp == NULL ) 
 return; 
 // Last node of the list 
 if ( tmp->Next() == NULL ) 
 { 
 delete tmp; head = NULL; 
 } 
 else 
 { 
 // Parse thru the nodes 
 Node *prev; 
 do 
 { 
 if ( tmp->Data() == data ) 
 break; 
 prev = tmp; 
 tmp = tmp->Next(); 
 } while ( tmp != NULL ); 
 // Adjust the pointers 
 prev->SetNext(tmp->Next()); 
 // Delete the current node 
 delete tmp; 
 } 
 } 
 
 int main() 
 { // New list 
 List list; 
 // Append nodes to the 
 list.Append(1); 
 list.Print(); 
 list.Append(3); 
 list.Print(); 
 list.Append(5); 
 list.Print(); 
 list.Append(7); 
 list.Print(); 
 list.Append(9); 
 list.Print(); 
 // Delete nodes from the list 
 list.Delete(7); 
 list.Print(); 
 list.Delete(5); 
 list.Print(); 
 list.Delete(3); 
 list.Print(); 
 list.Delete(9); 
 list.Print(); 
 list.Delete(1); 
 list.Print(); 
 }
