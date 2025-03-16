#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }
    ~node(){
        int value = data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};
void print(node* &head,node* &tail){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
    cout<<"Head is "<<head -> data<<endl;
    cout<<"Tail is "<<tail -> data<<endl;
}
void insertatHead(node* &head,node* &tail,int d){
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{ node* temp = new node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
   
}
void insertatTail(node* &head, node* &tail,int d){
    if(tail == NULL){
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
    
}
void insertatPosition(node* &tail,node* &head,int position,int d){
    node* nodeToinsert = new node(d);
    if(position == 1){
        insertatHead(head,tail,d);
        return;
    }
    int count = 1;
    node* temp = head;
    while(count < position - 1){
        temp = temp -> next;
        count++;
    }
    if(temp -> next == NULL){
        insertatTail(head,tail,d);
        return;
    }
    nodeToinsert -> next = temp -> next;
    temp -> next -> prev = nodeToinsert;
    temp -> next = nodeToinsert;
    nodeToinsert -> prev = temp;
}
void deletePosition(int position, node* &head, node* &tail){
    if(position == 1){
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
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
        if(curr == tail){
            tail = prev;
            tail -> next = NULL;
        }
       else {
            prev->next = curr->next;
            if (curr->next != NULL) {
                curr->next->prev = prev;
            }
        }
        curr->next = curr->prev = NULL;
        delete curr;
    }
}
  
int main(){
   
    node* head = NULL;
    node* tail = NULL;
   
    insertatHead(head,tail,14);
    print(head,tail);
    cout<<endl;
    insertatTail(head,tail,13);
    print(head,tail);
    cout<<endl;
    insertatTail(head,tail,15);
    print(head,tail);
    cout<<endl;
    insertatTail(head,tail,17);
    print(head,tail);
    cout<<endl;
    insertatPosition(tail,head,4,18);
    print(head,tail);
    cout<<endl;
    deletePosition(5,head,tail);
    print(head,tail);
}
