

#include <bits/stdc++.h>
using namespace std;

struct Node
{
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
    int countNodes(Node* root) {
        // Write your code here
        if(root == nullptr){
            return 0;
        }

        int leftNodeCounts = countNodes(root->left);
        int rightNodeCounts = countNodes(root->right);
        // Why 1 - 
        // recursivly left,right side all node we have count, but what about root node 
        return 1 + leftNodeCounts + rightNodeCounts;
    }
};
