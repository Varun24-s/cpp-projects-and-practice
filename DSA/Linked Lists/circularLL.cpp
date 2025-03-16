#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "The memory is free for " << value << endl;
    }
};
void insertNode(node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        node *newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    // non-empty list
    else
    {
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(node *&tail)
{
    node *temp = tail;

    while (tail->next != temp)
    {
        cout << tail->data << " ";
        tail = tail->next;
    }
    cout << endl;
}

int main()
{

    node *tail = NULL;
    insertNode(tail, 9, 10);
    insertNode(tail, 10, 11);
    insertNode(tail, 11, 12);
    insertNode(tail, 12, 13);
    insertNode(tail, 13, 14);
    insertNode(tail, 14, 15);
    print(tail);
}