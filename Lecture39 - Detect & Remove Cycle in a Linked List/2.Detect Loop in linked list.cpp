

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Approch-1 (Hashing)
// Map<Node*,int> mp
// store the currentNode,current Node is visited or not visited
// if any node is already visited then we have to say linked list have cycle
// if you traversed completed linked list, there is no duplicate node visited 
// no loop present!

// Approach-2 (Slow-Fast Algorithm)
// 1. Apply slow-fast algorithm
// 2. if slow and fast they both are meet,which means liked list have cycle
// 3. make sure you have write clean code base 


class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        Node* slow_pointer = head;
        Node* fast_pointer = head;
        
        while(fast_pointer != nullptr && fast_pointer->next != nullptr){
              slow_pointer = slow_pointer->next;
              fast_pointer = fast_pointer->next->next;
              
              if(slow_pointer == fast_pointer){
                  return true;
              }
        }
        return false;
    }
};