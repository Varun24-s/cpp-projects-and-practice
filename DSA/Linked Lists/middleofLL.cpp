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
int getlength(node* head){
  
    int count = 0;
    while(head!= 0){
        count++;
        head = head -> next;
    }
    return count;
}
node* middle(node* &head){
    // zero or one node
    if(head == NULL || head -> next == NULL){
        return head;
    }
    //2 nodes
    if(head -> next -> next == NULL){
        return head -> next;
    }
    node* slow = head;
    node * fast = head -> next;
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
    // int l = getlength(head);
    // node* temp = head;
    // int ans = l/2;
    // int count = 0;
    // while(count < ans){
    //     temp = temp -> next;
    //     count ++;
    // }
    // return temp;
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
    int l = getlength(head);
    cout <<l<<endl;
    print(head);
    node* beechka = middle(head);
    cout<< beechka -> data<<endl;
}