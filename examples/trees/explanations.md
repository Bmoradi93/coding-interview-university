## What is a tree?
In C++, a tree can be represented using a class or struct that has a pointer to its left and right subtrees (which can themselves be trees). Here is an example implementation of a binary tree node in C++:

```
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
```

This defines a TreeNode struct with an integer value (val) and two pointers to its left and right subtrees (left and right). The constructor initializes these pointers to NULL.

To create a binary tree, you can create a TreeNode for each node and set its left and right pointers to the appropriate subtrees. For example, here's how you could create a binary tree with root value 1, left subtree with root value 2, and right subtree with root value 3:

```
TreeNode* root = new TreeNode(1);
root->left = new TreeNode(2);
root->right = new TreeNode(3);

```

Note that this creates the nodes on the heap using new, so you'll need to manually deallocate them later with delete. Also, this is just a simple example - in practice, you would typically build a tree from input data or use recursive functions to create the tree structure.

## Example:
This program reads in a series of integers and builds a binary search tree from them. The insert function recursively inserts each value into the appropriate place in the tree, and the inorder function performs an inorder traversal of the tree to print out its values in sorted order.

```
#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void insert(TreeNode*& root, int val) {
    if (root == nullptr) {
        root = new TreeNode(val);
        return;
    }
    if (val < root->val) {
        insert(root->left, val);
    }
    else {
        insert(root->right, val);
    }
}

void inorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    int n;
    cin >> n;
    TreeNode* root = nullptr;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insert(root, val);
    }
    inorder(root);
    return 0;
}

```