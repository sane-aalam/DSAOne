

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
}; 

class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        Node * slow_pointer = head;
        Node * fast_pointer = head;
        
        while(fast_pointer != nullptr && fast_pointer->next != nullptr){
             slow_pointer = slow_pointer->next;
             fast_pointer = fast_pointer->next->next;
        }
        // Given the head of a linked list, the task is to find the middle
        return slow_pointer->data;
    }
};