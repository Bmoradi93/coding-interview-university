#include <iostream>


// Defining a treenode

struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {};
};

void insert(TreeNode*& root, int val)
{
    //base case
    if (root == nullptr)
    {
        root = new TreeNode(val);
        return;
    }

    if (val < root -> value)
    {
        insert(root->left, val);
    }
    else
    {
        insert(root->right, val);
    }
}

void inorder(TreeNode* root)
{
    // base case
    if (root == nullptr)
    {
        return;
    }

    inorder(root->left);
    std::cout << "Hello" << std::endl;
    inorder(root->right);
}


int main (int argc, char *argv[])
{
    int n;
    std::cin >> n;
    TreeNode* root = nullptr;
    for (int i = 0; i < n; i++) {
        int val;
        std::cin >> val;
        insert(root, val);
    }
    inorder(root);
    return 0;
}