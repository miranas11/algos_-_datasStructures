/****************
*Insert at head and print linked list
****************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class node {
    public:
        node*next;
        int data;
    node(int d){
        data =d;
    }
};

void insertAtHead(node*&head,int d){
    //if no other element exist in linked list
    if(head==NULL){
        head=new node(d);
        return;
    }   

    //if there is already a head then create a new node
    node *n=new node(d);
    //save the previous head in new ones next prooperty 
    (*n).next=head;
    //new head is equal to adress of new node
    head=n;
}

void pritnLinkedList(node*head){
    while(head!=NULL){
        cout<<(*head).data<<" -> ";
        head=(*head).next;
    }
}

int main(){
    node*head=NULL;
    insertAtHead(head,3);
    insertAtHead(head,341);
    insertAtHead(head,2);
    pritnLinkedList(head);
}