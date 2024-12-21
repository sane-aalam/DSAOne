#include <iostream>
#include <stack>
using namespace std;

//  * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head == nullptr || head->next == nullptr){
            return head;
        }     

        // Trust on recursion, Like you trust on yourself
        ListNode * newHead = reverseList(head->next);
        ListNode* front = head->next;
        // Make the 'front' node point to the current
        front->next = head;
        // Break the link from the current 'head' node
        // to the 'front' node to avoid cycles.
         head->next = NULL;
         return newHead;
    }
}; 

