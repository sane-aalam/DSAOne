

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

// # why stack (used)
// # stack follow LIFO concept.
// # Last in first out. reverse easly possible 
// 1. insert all node into the stack
// 2. pop the node into stack, create the linked list using top element
// 3. exit(stack is gonna to empty())
// 4. using extra space - 0(n), stack store N nubmers of node into the linked list 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> st;
        ListNode * temp = head;
        while(temp != nullptr){
             int node = temp->val;
             st.push(node);
             temp = temp->next;
        }

        temp = head;
        while(!st.empty()){
            int topElement = st.top();
            st.pop();

            temp->val = topElement;
            temp = temp->next;
        }
        return head;
    }
};