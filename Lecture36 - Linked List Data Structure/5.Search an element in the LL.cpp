
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = nullptr; }
}; 

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        
        Node * temp = head;
        
        while(temp != nullptr){
            int currentElement = temp->data;
            if(currentElement == key){
                return true;
            }
            temp = temp->next;
        }
        
        // not present into the linked list
        return false;
    }
};