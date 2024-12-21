

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


// Thinking to solve this problem
// i have solved how to find middle node of Linked List
// i can easly find out the middle node of linked lsit
// problem i faced to connect the node
// we need (slow->prev) node, because slow node, i have to deleted
// some,how i can store slow->prev node,
// (IDEA)
// keep track previousNODE
// pre,slow,fast pointer help easy to delete the middle node of linked list
// The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.


class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        // Leetcode(error faced then resolved it) - RuntimeError
        // Edge case 
        // Linked List have only one node,Linked List have no node
        // return null,(one node hai, which means you have to delete this node), after deleting all node, return empty 
        if(head==NULL||head->next==NULL)
             return NULL;
        
        ListNode * prev = nullptr;
        ListNode * slow = head;
        ListNode * fast = head;

        while(fast != nullptr && fast->next != nullptr){
             prev = slow;
             slow = slow->next;
             fast = fast->next->next;
        }

        ListNode * deleteNode = slow;
        ListNode * nextNode = slow->next;
        prev->next = nextNode;
        delete deleteNode;
        return head;
    }
};