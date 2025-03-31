#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a = l1;
        ListNode* b = l2;
        ListNode* d = new ListNode(-1);
        int c = 0;
        int sum = 0;
        ListNode* curr = d;

        while (a != nullptr || b != nullptr) {
            sum = c;
            if (a) sum += a->val;
            if (b) sum += b->val;
            ListNode* e = new ListNode(sum % 10);
            c = sum / 10;
            curr->next = e;
            curr = curr->next;
            if (a) a = a->next;
            if (b) b = b->next;
        }

        if (c) {
            ListNode* f = new ListNode(c);
            curr->next = f;
        }
        return d->next;
    }
};

// Helper function to create a linked list from a vector
ListNode* createLinkedList(const vector<int>& nums) {
    ListNode* dummy = new ListNode(-1);
    ListNode* current = dummy;
    for (int num : nums) {
        current->next = new ListNode(num);
        current = current->next;
    }
    return dummy->next;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    while (head) {
        cout << head->val;
        head = head->next;
        if (head) cout << " -> ";
    }
    cout << endl;
}

int main() {
    Solution solution;

    // Input for the first number
    cout << "Enter the number of digits in the first number: ";
    int n1;
    cin >> n1;
    vector<int> num1(n1);
    cout << "Enter the digits of the first number in reverse order: ";
    for (int i = 0; i < n1; ++i) {
        cin >> num1[i];
    }
    ListNode* l1 = createLinkedList(num1);

    // Input for the second number
    cout << "Enter the number of digits in the second number: ";
    int n2;
    cin >> n2;
    vector<int> num2(n2);
    cout << "Enter the digits of the second number in reverse order: ";
    for (int i = 0; i < n2; ++i) {
        cin >> num2[i];
    }
    ListNode* l2 = createLinkedList(num2);

    // Perform addition
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Output the result
    cout << "The result of addition is: ";
    printLinkedList(result);

    return 0;
}
