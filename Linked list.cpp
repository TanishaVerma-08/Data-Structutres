#include<iostream>
using namespace std;
class node
{    public:
    int value=0;
    node *next;
};
class LinkedList{
    node *head;
    public: LinkedList()
    {
        head = NULL;
    }
    void display();
    
};
void LinkedList::display()
{
    node* temp = head;
    if (head == NULL)
    {
        cout<<"Empty!!";
    }
    while(temp != NULL)
    {
        cout<<temp->value;
        temp=temp->next;
    }
}
int main()
{
    node n1;
    node n2;
    node n3;
    n1.value=10;
    
    n2.value=20;
    
    n3.value=30;
    
    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;
    LinkedList l1;
    l1.display();
}
