#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d){
        this -> data = d;
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
void insertatHead(node* & head,node* &tail,int d){
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        temp -> next = head;
        head = temp;
    }    
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;  
}
void reverse(node* &head,node* &curr,node* &prev){
    if(curr == NULL){
        head = prev;
          return;
    }
    node* forward = curr -> next;
    curr -> next = prev;
    reverse(head,forward,curr);
  

    // if(head == NULL || head -> next == NULL){
    //     return;
    // }
    // node* prev = NULL;
    // node* curr = head;
    // node* forward = NULL;
    // while(curr!=NULL){
    //     forward = curr -> next;
    //     curr -> next = prev;
    //     prev = curr;
    //     curr = forward;
    // }
    // head = prev;
    // print(head);
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    node* prev = NULL;
  
    insertatHead(head,tail,10);
    insertatHead(head,tail,11);
    insertatHead(head,tail,12);
    insertatHead(head,tail,13);
    insertatHead(head,tail,14);
    insertatHead(head,tail,15);
    print(head);
    reverse(head,head,prev);
    print(head);
}