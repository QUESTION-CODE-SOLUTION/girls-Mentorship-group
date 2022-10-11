#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node (int val)
    {
        this->val=val;
        this->next=nullptr;
    }
};
class customLinkedlist
{
    public:
    Node *head,*tail;
    int size=0;
    customLinkedlist()
    {
        size=0;
        head=nullptr;
        tail=nullptr;
    }
    void addLast (int val)
    {
        Node *node=new Node(val);
        if(size==0)
        {
            size++;
            head=node;
            tail=node;
            return ;
        }
        tail->next=node;
        tail=node;
        size++;
    }
    void addFirst(int val)
    {
        Node *node=new Node(val);
        if (size==0)
        {
            addLast(val);
            return ;
        }
        node->next=head;
        head=node;
        size++;
    }
    void removeFirst()
    {
        if (size==0)
        {
            cout<<"Linkedlist is empty"<<endl;
            return ;
        }
        if(size==1)
        {
            size--;
            head=nullptr;
            tail=nullptr;
            return ;
        }
        size--;
        head=head->next;
    }
    void removeLast()
    {
        if(size==0)
        {
            removeFirst();
            return;
        }
        size--;
        Node *p=head;
        while(p->next!=tail)
        {
            p=p->next;
        }
        p->next=nullptr;
        tail=p;
    }
    void Display()
    {
        Node *p=head;
        while(p!=nullptr)
        {
            cout<<p->val<<" ";
            p=p->next;
        }
        cout<<endl;
    }
};

int main()
{
    customLinkedlist*c1=new customLinkedlist();
    c1->addLast(30);
    c1->addLast(40);
    c1->addLast(50);
    c1->addFirst(20);
    c1->addFirst(10);
    c1->addFirst(5); 
    c1->Display();
    c1->removeFirst();
    c1->Display();
    c1->removeLast();
    c1->Display();
    return 0;
}
/*OUTPUT-
5 10 20 30 40 50 
10 20 30 40 50 
10 20 30 40 */
