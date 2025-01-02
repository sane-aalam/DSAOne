
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    // Write your code here.
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    int countLeafNodes = 0;
    while (!q.empty())
    {
        BinaryTreeNode<int> *node = q.front();
        q.pop();

        // current Node left node or right node is nullptr, which means got one leaf node
        if (node->left == nullptr && node->right == nullptr){
            countLeafNodes++;
        }
        if (node->left != nullptr)
        {
            q.push(node->left);
        }
        if (node->right != nullptr)
        {
            q.push(node->right);
        }
    }
    return countLeafNodes;
}
