
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

bool search(Node* root, int x) {
    // Your code here
     if(root == nullptr){
         return false;
     }
     
     if(root->data == x){
         return true;
     }
     
     // we have to search root of right subtree(binary serach tree)(sorted tree)
     if(root->data < x){
         return search(root->right,x);
     }else{
         return search(root->left,x);
     }
}
