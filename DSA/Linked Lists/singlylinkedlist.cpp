#include <iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"The memory is free for "<<value<<endl;
    }

};
void deletePosition(int position, node* &head){
    if(position == 1){
        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        int count = 1;
        node* prev = NULL;
        node* curr = head;
        while(count < position){
            prev = curr;
            curr = curr -> next;
            count ++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
void insertatHead(node* & head,int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertatTail(node* &tail,int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = tail -> next;
}
void insertatPosition(node* &tail,node* &head,int position,int d){
    node* nodeToinsert = new node(d);
    if(position == 1){
        insertatHead(head,d);
        return;
    }
    int count = 1;
    node* temp = head;
    while(count < position - 1){
        temp = temp -> next;
        count++;
    }
    if(temp -> next == NULL){
        insertatTail(tail,d);
        return;
    }
    nodeToinsert -> next = temp -> next;
    temp -> next = nodeToinsert;
}
int main(){
    node* node1 = new node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    node* head = node1;
    node* tail = node1;
    insertatHead(head,12);
    print(head);
    insertatHead(head,15);
    print(head);
    insertatTail(tail,2);
    print(head);
    // cout<<head -> data<<endl;
    // cout<<tail -> data<<endl;
    insertatPosition(tail,head,5,22);
    print(head);
    deletePosition(3,head);
    print(head);
}