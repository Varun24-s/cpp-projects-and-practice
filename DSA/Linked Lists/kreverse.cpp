#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
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
void insertatHead(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head = temp;
    }
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
node *kreverse(node *&head, int k)
{
    if (head == NULL || k == 1)
    {
        return head; // No change if the list is empty or k = 1
    }

    node *forward = NULL;
    node *curr = head;
    node *prev = NULL;
    int count = 0;

    // Reverse first 'k' nodes
    while (curr != NULL && count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if (head != NULL)
    {
        head->next = (curr != NULL) ? kreverse(curr, k) : NULL;
    }

    // 'prev' is the new head of the reversed segment
    return prev;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    node *prev = NULL;

    insertatHead(head, tail, 10);
    insertatHead(head, tail, 11);
    insertatHead(head, tail, 12);
    insertatHead(head, tail, 13);
    insertatHead(head, tail, 14);
    insertatHead(head, tail, 15);
    print(head);
    int k;
    cin >> k;
    head = kreverse(head, k);
    print(head);
}