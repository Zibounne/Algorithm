// 2: Add Two Numbers

/* Topic:
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]

Constraints:

The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros.
*/

// First try
#include <iostream>

int main() {
    struct ListNode {
        int val;
        ListNode *next;

        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    ListNode* p1 {l1};
    ListNode* p2 {l2};
    int carry {0};
    ListNode* head {nullptr};
    ListNode* current {nullptr};

    while (p1 != nullptr || p2 != nullptr || carry != 0) {
        int val1 {0};
        if (p1 != nullptr) val1 = p1->val;

        int val2 {0};
        if (p2 != nullptr) val2 = p2->val;

        int sum {val1 + val2 + carry};
        int digit {sum % 10};
        carry = sum / 10;

        ListNode* newNode = new ListNode(digit);

        if (head == nullptr) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = current->next;
        }

        if (p1 != nullptr) p1 = p1->next;
        if (p2 != nullptr) p2 = p2->next;
    }

    return 0;
}

// Solution
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*
class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* p1 {l1};
            ListNode* p2 {l2};
            int carry {0};
            ListNode* head {nullptr};
            ListNode* current {nullptr};
    
            while (p1 != nullptr || p2 != nullptr || carry != 0) {
                int val1 {0};
                if (p1 != nullptr) val1 = p1->val;
    
                int val2 {0};
                if (p2 != nullptr) val2 = p2->val;
    
                int sum {val1 + val2 + carry};
                int digit {sum % 10};
                carry = sum / 10;
    
                ListNode* newNode = new ListNode(digit);
    
                if (head == nullptr) {
                    head = newNode;
                    current = newNode;
                } else {
                    current->next = newNode;
                    current = current->next;
                }
    
                if (p1 != nullptr) p1 = p1->next;
                if (p2 != nullptr) p2 = p2->next;
            }
    
            return head;
        }
    };
*/