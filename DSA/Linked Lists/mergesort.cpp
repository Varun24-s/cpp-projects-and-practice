#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
private:
    // Function to find the middle node of a linked list
    ListNode* getMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Move fast by two steps and slow by one step
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Function to merge two sorted linked lists
    ListNode* merge(ListNode* left, ListNode* right) {
        if (left == nullptr) {
            return right;
        }
        if (right == nullptr) {
            return left;
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;

        // Merge two sorted lists
        while (left != nullptr && right != nullptr) {
            if (left->val < right->val) {
                ans->next = left;
                left = left->next;
            } else {
                ans->next = right;
                right = right->next;
            }
            ans = ans->next;
        }

        // If any of the lists has remaining nodes, attach them
        if (left != nullptr) {
            ans->next = left;
        }
        if (right != nullptr) {
            ans->next = right;
        }

        return dummy->next;
    }

public:
    // Main function to sort the linked list
    ListNode* sortList(ListNode* head) {
        // Base case: if the list is empty or has only one element
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Find the middle node
        ListNode* middle = getMid(head);
        ListNode* right = middle->next;
        ListNode* left = head;

        // Disconnect the left half from the right half
        middle->next = nullptr;

        // Recursively sort the left and right halves
        left = sortList(left);
        right = sortList(right);

        // Merge the two sorted halves and return the result
        ListNode* result = merge(left, right);
        return result;
    }
};

// Utility function to create a linked list from an array
ListNode* createList(int arr[], int size) {
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < size; ++i) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Utility function to print a linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Test case: Create a linked list from an array
    int arr[] = {4, 2, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    ListNode* head = createList(arr, size);
    
    cout << "Original List: ";
    printList(head);

    // Sort the linked list
    Solution solution;
    ListNode* sortedHead = solution.sortList(head);

    // Print the sorted linked list
    cout << "Sorted List: ";
    printList(sortedHead);

    return 0;
}
