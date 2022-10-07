#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=nullptr;
    }

};
class CustomLinkedList{
    public:
    Node*head,*tail;
    int size=0;
    CustomLinkedList(){
        size=0;
        head =nullptr;
        tail=nullptr;
    }
    void addLast(int val){
        Node*node=new Node(val);
        if(size==0){
            size++;
            head=node;
            tail=node;
            return;

        }
        tail->next=node;
        tail=node;
        size++;
    }
    void addfirst(int val){
        Node*node=new Node(val);
        if(size==0){
            addLast(val);
            return;
        }
        node->next=head;
        head=node;
        size++;
    }
    void removefirst()
    {
        if(size==0){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        if(size==1){
            size--;
            head=nullptr;
            tail=nullptr;
            return;
        }
        size--;
        head=head->next;
    }
    void removelast()
    {
        if(size==0){
            removefirst();
            return;

        }
        if(size==1){
            removefirst();
            return;
        }
        size--;
        Node*p=head;
        while(p->next!=tail){
            p=p->next;
        }
        p->next=nullptr;
        tail=p;
    }
     void display() {
        Node*p=head;
        while(p!=nullptr){
            cout<<p->val<<" ";
            p=p->next;
        }
        cout<<endl;

     }

};
int main(){
    CustomLinkedList*c1=new CustomLinkedList();

    
    c1->addLast(10);
    c1->addLast(20);
    c1->addLast(30);
    c1->addfirst(40);
    c1->display();
    c1->removefirst();
    c1->removelast();
    c1->display();
    return 0;
    
}

output:----
 40 10 20 30 
10 20 






