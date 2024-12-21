
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};



class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code her
         queue<Node*> q;
         q.push(root);
         vector<int> reverseLevelOrderStored;
         
         while(!q.empty()){
             Node * temp = q.front();
             q.pop();
             
             reverseLevelOrderStored.push_back(temp->data);
             
             if(temp->right != nullptr){
                 q.push(temp->right);
             }
             
             if(temp->left != nullptr){
                 q.push(temp->left);
             }
         }
         
         // STL (method used here)
         reverse(reverseLevelOrderStored.begin(),reverseLevelOrderStored.end());
         return reverseLevelOrderStored;
    }
};