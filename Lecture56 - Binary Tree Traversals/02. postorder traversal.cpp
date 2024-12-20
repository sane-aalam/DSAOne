
#include <bits/stdc++.h>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    void helper(TreeNode * root,vector<int> & resultArray){

        if(root == nullptr){
            return;
        }
        // L-R-N
        helper(root->left,resultArray);
        helper(root->right,resultArray);
        resultArray.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> resultArray;
        helper(root,resultArray);
        return resultArray;
    }
};